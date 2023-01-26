#ifndef EDITORCHANGEWINDOW_H
#define EDITORCHANGEWINDOW_H

#include <QWidget>
#include <QDataWidgetMapper>
#include <QRegularExpression>
#include <QCloseEvent>

namespace Ui {
class EditOrChangeWindow;
}

class EditOrChangeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit EditOrChangeWindow(QWidget *parent = nullptr);
    ~EditOrChangeWindow();

    void setModel(QAbstractItemModel *model);
    QDataWidgetMapper *mapper;
private slots:
    void on_OKButton_clicked();

    void on_cancelButton_clicked();

    void closeEvent(QCloseEvent *event) override;

private:
    Ui::EditOrChangeWindow *ui;
    QString AllEmails;

signals:
    void cancelsingnal();

public slots:
    void EmailSearchslot(QString mails);
};

#endif // EDITORCHANGEWINDOW_H
