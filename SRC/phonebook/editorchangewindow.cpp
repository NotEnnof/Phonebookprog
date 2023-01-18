#include "editorchangewindow.h"
#include "ui_editorchangewindow.h"

EditOrChangeWindow::EditOrChangeWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditOrChangeWindow)
{
    ui->setupUi(this);
    ui->dateOfedit->setDate(QDate::currentDate());
    ui->dateofbirth->setDate(QDate::currentDate());
    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

}

EditOrChangeWindow::~EditOrChangeWindow()
{
    delete ui;
}

void EditOrChangeWindow::setModel(QAbstractItemModel *model)
{
    mapper->setModel(model);
    mapper->addMapping(ui->seqNumber, 0);
    mapper->addMapping(ui->fullName, 1, "plainText");
    mapper->addMapping(ui->email, 2, "plainText");
    mapper->addMapping(ui->dateofbirth, 3);
    mapper->addMapping(ui->dateOfedit, 4);
}

void EditOrChangeWindow::on_OKButton_clicked()
{
    if((ui->fullName->toPlainText() != "") and (ui->email->toPlainText() != "") and (ui->dateofbirth->date() <= ui->dateOfedit->date())){
        mapper->submit();
        ui->dateOfedit->setDate(QDate::currentDate());
        ui->dateofbirth->setDate(QDate::currentDate());
        ui->fullNameError->setText("");
        ui->emailError->setText("");
        ui->dateError->setText("");
        close();
    }
    else{
        if(ui->fullName->toPlainText() == "")
            ui->fullNameError->setText("*Это поле обязательно для заполнения");
        else ui->fullNameError->setText("");
        if(ui->email->toPlainText() == "")
            ui->emailError->setText("*Это поле обязательно для заполнения");
        else ui->emailError->setText("");
        if(ui->dateofbirth->date() > ui->dateOfedit->date())
            ui->dateError->setText("*Дата рождения не может превышать дату внесения");
        else ui->dateError->setText("");
    }
}


void EditOrChangeWindow::on_cancelButton_clicked()
{
    ui->dateOfedit->setDate(QDate::currentDate());
    ui->dateofbirth->setDate(QDate::currentDate());
    ui->fullNameError->setText("");
    ui->emailError->setText("");
    ui->dateError->setText("");
    close();
}

