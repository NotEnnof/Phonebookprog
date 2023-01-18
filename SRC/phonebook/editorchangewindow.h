#ifndef EDITORCHANGEWINDOW_H
#define EDITORCHANGEWINDOW_H

#include <QWidget>
#include <QDataWidgetMapper>

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

private:
    Ui::EditOrChangeWindow *ui;
};

#endif // EDITORCHANGEWINDOW_H
