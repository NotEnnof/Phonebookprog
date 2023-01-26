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
    mapper->addMapping(ui->fullName, 1);
    mapper->addMapping(ui->email, 2);
    mapper->addMapping(ui->dateofbirth, 3);
    mapper->addMapping(ui->dateOfedit, 4);
}

void EditOrChangeWindow::on_OKButton_clicked()
{
    QString strfullName = ui->fullName->text();
    QString stremail = ui->email->text();
    QRegularExpression rxallmails(ui->email->text());
    QRegularExpression rxfullName("^\\s");
    QRegularExpression rxemail("^[0-9a-zA-Z]+([0-9a-zA-Z]*[-_])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z]*[.])[a-zA-Z]{2,6}$");
    if((ui->fullName->text() != "") and (ui->email->text() != "") and
            (ui->dateofbirth->date() <= ui->dateOfedit->date()) and
            stremail.contains(rxemail) and !strfullName.contains(rxfullName) and
            !AllEmails.contains(rxallmails)){
        mapper->submit();
        ui->dateOfedit->setDate(QDate::currentDate());
        ui->dateofbirth->setDate(QDate::currentDate());
        ui->fullNameError->setText("");
        ui->emailError->setText("");
        ui->dateError->setText("");
        close();
    }
    else{
        if(ui->fullName->text() == "")
            ui->fullNameError->setText("*Это поле обязательно для заполнения");
        else ui->fullNameError->setText("");
        if(ui->email->text() == "")
            ui->emailError->setText("*Это поле обязательно для заполнения");
        else ui->emailError->setText("");
        if(ui->dateofbirth->date() > ui->dateOfedit->date())
            ui->dateError->setText("*Дата рождения не может превышать дату внесения");
        else ui->dateError->setText("");
        if(!stremail.contains(rxemail) and ui->email->text() != "")
            ui->emailError->setText("*Поле не соответствует шаблону. Шаблон: example@gmail.com/mail.ru/ и т.п.");
        if(strfullName.contains(rxfullName) and ui->fullName->text() != "")
            ui->fullNameError->setText("*Поле не может начинаться с пробела");
        if(AllEmails.contains(rxallmails))
            ui->emailError->setText("*Данный адрес уже есть в книге");
    }
}


void EditOrChangeWindow::on_cancelButton_clicked()
{
    ui->dateOfedit->setDate(QDate::currentDate());
    ui->dateofbirth->setDate(QDate::currentDate());
    ui->fullNameError->setText("");
    ui->emailError->setText("");
    ui->dateError->setText("");
    emit cancelsingnal();
    close();
}

void EditOrChangeWindow::closeEvent(QCloseEvent *event)
{
    emit cancelsingnal();
    event->accept();
}

void EditOrChangeWindow::EmailSearchslot(QString mails)
{
    AllEmails = mails;
}
