#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlTableModel>
#include <QDebug>
#include <QFile>
#include <editorchangewindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_editButton_clicked();

    void on_deleteButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_changeButton_clicked();

    void on_resetButton_clicked();

    void on_searchButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    int currentRow;
    EditOrChangeWindow *editWindow;
    QModelIndex rowIndex;
};
#endif // MAINWINDOW_H
