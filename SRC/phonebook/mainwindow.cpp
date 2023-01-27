#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE", "dbconnection");
    db.setDatabaseName("../../DB/Phonebook.db");
    standardDB = QSqlDatabase::addDatabase("QSQLITE", "standardDBconnection");
    standardDB.setDatabaseName("../../DB/StandardDB.db");
    if(db.open())
    {
        ui->statusbar->showMessage("Приятной работы");

        model = new QSqlTableModel(this, db);
        model->setTable("phonebook");
        model->select();
        model->setHeaderData(0, Qt::Horizontal, "№ п/п", Qt::DisplayRole);
        model->setHeaderData(1, Qt::Horizontal, "ФИО", Qt::DisplayRole);
        model->setHeaderData(2, Qt::Horizontal, "E-mail", Qt::DisplayRole);
        model->setHeaderData(3, Qt::Horizontal, "День рождения", Qt::DisplayRole);
        model->setHeaderData(4, Qt::Horizontal, "Дата внесения", Qt::DisplayRole);
        ui->tableView->setModel(model);
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableView->verticalHeader()->hide();
        currentRow = model->rowCount() - 1;
        rowIndex = model->index(model->rowCount() - 1, 0);
        searchFlag = false;
        allmails = "";
        for(int i=0; i!=model->rowCount();i++)
            allmails += model->data(model->index(i, 2)).toString();


        editWindow = new EditOrChangeWindow();
        editWindow->setParent(this, Qt::Window);
        editWindow->setModel(model);

        connect(editWindow, &EditOrChangeWindow::cancelsingnal, this, &MainWindow::cancelslot);
        connect(this, &MainWindow::EmailSerchsignal, editWindow, &EditOrChangeWindow::EmailSearchslot);

    }
    else
    {
        ui->statusbar->showMessage("Ошибка подключения к базе данных: " + db.lastError().databaseText());
    }

}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}


void MainWindow::on_editButton_clicked()
{

    model->insertRow(model->rowCount());
    if(searchFlag == true){
        rowCount += 1;
        model->setData(model->index(model->rowCount() - 1, 0), rowCount);
    }
    else model->setData(model->index(model->rowCount() - 1, 0), model->rowCount());

    editWindow->mapper->setCurrentModelIndex(model->index(model->rowCount() - 1, 0));
    editWindow->show();
    emit EmailSerchsignal(allmails);
}


void MainWindow::on_deleteButton_clicked()
{
    QVariant seqNum = model->data(model->index(currentRow, 0));
    model->removeRow(currentRow);
    model->select();
    model->setFilter("");
    for(int i = seqNum.toInt()-1; i!=model->rowCount(); i++){
        model->setData(model->index(i, 0), i+1);
        ui->tableView->selectRow(i);
    }
    model->select();
    rowCount -= 1;
    if(searchFlag){
        rowCount = model->rowCount();
        QString searchText = ui->searchPTEdit->text();
        int searchObject = ui->searchCBox->currentIndex();
        searchText = "'%" + searchText + "%'";
        QString str;
        switch (searchObject) {
        case 0:
            str = "seqnumber";
            break;
        case 1:
            str = "name";
            break;
        case 2:
            str = "email";
            break;
        case 3:
            str = "birthday";
            break;
        case 4:
            str = "depositdate";
            break;
        }
        model->setFilter(str + " like " + searchText);
    }
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    currentRow = index.row();
    rowIndex = index;
}


void MainWindow::on_changeButton_clicked()
{
    editWindow->mapper->setCurrentModelIndex(rowIndex);
    editWindow->show();
}


void MainWindow::on_resetButton_clicked()
{
    model->setFilter("");
    ui->tableView->sortByColumn(0, Qt::AscendingOrder);
    searchFlag = false;
}


void MainWindow::on_searchButton_clicked()
{
    model->setFilter("");
    model->select();
    searchFlag = true;
    rowCount = model->rowCount();

    QString searchText = ui->searchPTEdit->text();
    int searchObject = ui->searchCBox->currentIndex();
    searchText = "'%" + searchText + "%'";
    QString str;
    switch (searchObject) {
    case 0:
        str = "seqnumber";
        break;
    case 1:
        str = "name";
        break;
    case 2:
        str = "email";
        break;
    case 3:
        str = "birthday";
        break;
    case 4:
        str = "depositdate";
        break;
    }
    model->setFilter(str + " like " + searchText);
}


void MainWindow::on_dumpButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Очистить книгу", "Все ваши записи будут удалены. Вы уверены?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        model->setFilter("");
        ui->tableView->sortByColumn(0, Qt::AscendingOrder);
        for(int i=0; i!=model->rowCount(); i++){
            model->removeRow(i);
        }
        model->select();
        ui->searchCBox->setCurrentIndex(0);
        ui->searchPTEdit->setText("");
        allmails = "";

        if(standardDB.open()){

            standardmodel = new QSqlTableModel(this, standardDB);
            standardmodel->setTable("phonebook");
            standardmodel->select();
            for(int i=0; i!=standardmodel->rowCount(); i++){
                model->insertRow(i);
                model->setData(model->index(i, 0), standardmodel->data(standardmodel->index(i, 0)));
                model->setData(model->index(i, 1), standardmodel->data(standardmodel->index(i, 1)).toString());
                model->setData(model->index(i, 2), standardmodel->data(standardmodel->index(i, 2)).toString());
                model->setData(model->index(i, 3), standardmodel->data(standardmodel->index(i, 3)).toString());
                model->setData(model->index(i, 4), standardmodel->data(standardmodel->index(i, 4)).toString());
                ui->tableView->selectRow(i);
            }
            model->select();
            for(int i=0; i!=model->rowCount();i++)
                allmails += model->data(model->index(i, 2)).toString();

        }

    }

}

void MainWindow::cancelslot()
{
    model->select();
    if(model->data(model->index(model->rowCount() - 1, 2)).toString() != "")
        allmails += model->data(model->index(model->rowCount() - 1, 2)).toString();
}


