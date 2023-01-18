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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
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
    QPushButton *deleteButton;
    QPushButton *searchButton;
    QPushButton *editButton;
    QPushButton *changeButton;
    QPushButton *resetButton;
    QLabel *label_3;
    QComboBox *searchCBox;
    QLabel *label_2;
    QTableView *tableView;
    QLabel *label;
    QPlainTextEdit *searchPTEdit;
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
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        deleteButton->setFont(font);

        gridLayout->addWidget(deleteButton, 5, 2, 1, 1);

        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setFont(font);

        gridLayout->addWidget(searchButton, 3, 2, 1, 1);

        editButton = new QPushButton(centralwidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        sizePolicy.setHeightForWidth(editButton->sizePolicy().hasHeightForWidth());
        editButton->setSizePolicy(sizePolicy);
        editButton->setFont(font);

        gridLayout->addWidget(editButton, 5, 0, 1, 1);

        changeButton = new QPushButton(centralwidget);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setFont(font);

        gridLayout->addWidget(changeButton, 5, 1, 1, 1);

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setFont(font);

        gridLayout->addWidget(resetButton, 3, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(16);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 1, 1, 2);

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
        searchCBox->setFont(font);

        gridLayout->addWidget(searchCBox, 2, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(15);
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setFont(font);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(tableView, 4, 0, 1, 3);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        searchPTEdit = new QPlainTextEdit(centralwidget);
        searchPTEdit->setObjectName(QString::fromUtf8("searchPTEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(searchPTEdit->sizePolicy().hasHeightForWidth());
        searchPTEdit->setSizePolicy(sizePolicy2);
        searchPTEdit->setFont(font);

        gridLayout->addWidget(searchPTEdit, 2, 1, 1, 2);

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
        deleteButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        changeButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\321\202\321\200\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\264\320\273\321\217 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        searchCBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\276\321\200\321\217\320\264\320\272\320\276\320\262\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        searchCBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        searchCBox->setItemText(2, QCoreApplication::translate("MainWindow", "E-mail", nullptr));
        searchCBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        searchCBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\320\275\320\265\321\201\320\265\320\275\320\270\321\217", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\276\320\273\320\265 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\275\320\276\320\271 \320\272\320\275\320\270\320\263\320\265", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
