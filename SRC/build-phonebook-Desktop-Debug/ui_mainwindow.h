/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *editButton;
    QComboBox *searchCBox;
    QTableView *tableView;
    QPushButton *deleteButton;
    QPushButton *searchButton;
    QPushButton *resetButton;
    QLabel *label_3;
    QPushButton *changeButton;
    QLabel *label;
    QPushButton *dumpButton;
    QLineEdit *searchPTEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(970, 663);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        editButton = new QPushButton(centralwidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editButton->sizePolicy().hasHeightForWidth());
        editButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        editButton->setFont(font1);

        gridLayout->addWidget(editButton, 6, 0, 1, 1);

        searchCBox = new QComboBox(centralwidget);
        searchCBox->addItem(QString());
        searchCBox->addItem(QString());
        searchCBox->addItem(QString());
        searchCBox->addItem(QString());
        searchCBox->addItem(QString());
        searchCBox->setObjectName(QString::fromUtf8("searchCBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchCBox->sizePolicy().hasHeightForWidth());
        searchCBox->setSizePolicy(sizePolicy1);
        searchCBox->setFont(font1);

        gridLayout->addWidget(searchCBox, 3, 0, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setFont(font1);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(tableView, 5, 0, 1, 3);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);
        deleteButton->setFont(font1);

        gridLayout->addWidget(deleteButton, 6, 2, 1, 1);

        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setFont(font1);

        gridLayout->addWidget(searchButton, 4, 2, 1, 1);

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setFont(font1);

        gridLayout->addWidget(resetButton, 4, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(16);
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 2, 1, 1, 2);

        changeButton = new QPushButton(centralwidget);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setFont(font1);

        gridLayout->addWidget(changeButton, 6, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        dumpButton = new QPushButton(centralwidget);
        dumpButton->setObjectName(QString::fromUtf8("dumpButton"));
        dumpButton->setFont(font1);

        gridLayout->addWidget(dumpButton, 0, 2, 1, 1);

        searchPTEdit = new QLineEdit(centralwidget);
        searchPTEdit->setObjectName(QString::fromUtf8("searchPTEdit"));
        searchPTEdit->setFont(font1);

        gridLayout->addWidget(searchPTEdit, 3, 1, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 970, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275\320\275\320\260\321\217 \320\272\320\275\320\270\320\263\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\276\320\273\320\265 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        searchCBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\276\321\200\321\217\320\264\320\272\320\276\320\262\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        searchCBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        searchCBox->setItemText(2, QCoreApplication::translate("MainWindow", "E-mail", nullptr));
        searchCBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        searchCBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\320\275\320\265\321\201\320\265\320\275\320\270\321\217", nullptr));

        deleteButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\321\202\321\200\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\264\320\273\321\217 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        changeButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\275\320\276\320\271 \320\272\320\275\320\270\320\263\320\265", nullptr));
        dumpButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201 \320\272\320\275\320\270\320\263\320\270 \320\272 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\274\321\203 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\216", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
