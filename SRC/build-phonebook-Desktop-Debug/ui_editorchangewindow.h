/********************************************************************************
** Form generated from reading UI file 'editorchangewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORCHANGEWINDOW_H
#define UI_EDITORCHANGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditOrChangeWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpinBox *seqNumber;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QLabel *fullNameError;
    QLabel *label;
    QLineEdit *fullName;
    QGridLayout *gridLayout_3;
    QLabel *emailError;
    QLabel *label_3;
    QLineEdit *email;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QDateEdit *dateofbirth;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QDateEdit *dateOfedit;
    QLabel *dateError;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *OKButton;

    void setupUi(QWidget *EditOrChangeWindow)
    {
        if (EditOrChangeWindow->objectName().isEmpty())
            EditOrChangeWindow->setObjectName(QString::fromUtf8("EditOrChangeWindow"));
        EditOrChangeWindow->resize(714, 592);
        verticalLayout_2 = new QVBoxLayout(EditOrChangeWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(EditOrChangeWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(0, 80));
        QFont font;
        font.setPointSize(20);
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        seqNumber = new QSpinBox(EditOrChangeWindow);
        seqNumber->setObjectName(QString::fromUtf8("seqNumber"));
        QFont font1;
        font1.setPointSize(14);
        seqNumber->setFont(font1);
        seqNumber->setReadOnly(true);
        seqNumber->setButtonSymbols(QAbstractSpinBox::NoButtons);
        seqNumber->setMinimum(1);
        seqNumber->setMaximum(999999999);

        gridLayout->addWidget(seqNumber, 1, 0, 1, 1);

        label_2 = new QLabel(EditOrChangeWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        fullNameError = new QLabel(EditOrChangeWindow);
        fullNameError->setObjectName(QString::fromUtf8("fullNameError"));
        QFont font3;
        font3.setPointSize(12);
        fullNameError->setFont(font3);

        gridLayout_2->addWidget(fullNameError, 3, 0, 1, 1);

        label = new QLabel(EditOrChangeWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        fullName = new QLineEdit(EditOrChangeWindow);
        fullName->setObjectName(QString::fromUtf8("fullName"));
        fullName->setFont(font1);

        gridLayout_2->addWidget(fullName, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        emailError = new QLabel(EditOrChangeWindow);
        emailError->setObjectName(QString::fromUtf8("emailError"));
        emailError->setFont(font3);

        gridLayout_3->addWidget(emailError, 2, 0, 1, 1);

        label_3 = new QLabel(EditOrChangeWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        email = new QLineEdit(EditOrChangeWindow);
        email->setObjectName(QString::fromUtf8("email"));
        email->setFont(font1);

        gridLayout_3->addWidget(email, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_4 = new QLabel(EditOrChangeWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        dateofbirth = new QDateEdit(EditOrChangeWindow);
        dateofbirth->setObjectName(QString::fromUtf8("dateofbirth"));
        dateofbirth->setFont(font1);
        dateofbirth->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateofbirth->setCalendarPopup(true);

        gridLayout_4->addWidget(dateofbirth, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_5 = new QLabel(EditOrChangeWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        dateOfedit = new QDateEdit(EditOrChangeWindow);
        dateOfedit->setObjectName(QString::fromUtf8("dateOfedit"));
        dateOfedit->setFont(font1);
        dateOfedit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateOfedit->setCalendarPopup(true);

        gridLayout_5->addWidget(dateOfedit, 1, 0, 1, 1);

        dateError = new QLabel(EditOrChangeWindow);
        dateError->setObjectName(QString::fromUtf8("dateError"));
        dateError->setFont(font3);

        gridLayout_5->addWidget(dateError, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(EditOrChangeWindow);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setFont(font1);

        horizontalLayout->addWidget(cancelButton);

        OKButton = new QPushButton(EditOrChangeWindow);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));
        OKButton->setFont(font1);

        horizontalLayout->addWidget(OKButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(EditOrChangeWindow);

        QMetaObject::connectSlotsByName(EditOrChangeWindow);
    } // setupUi

    void retranslateUi(QWidget *EditOrChangeWindow)
    {
        EditOrChangeWindow->setWindowTitle(QCoreApplication::translate("EditOrChangeWindow", "\320\244\320\276\321\200\320\274\320\260 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("EditOrChangeWindow", "\320\244\320\276\321\200\320\274\320\260 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("EditOrChangeWindow", "\342\204\226 \320\277/\320\277", nullptr));
        fullNameError->setText(QString());
        label->setText(QCoreApplication::translate("EditOrChangeWindow", "\320\244\320\230\320\236", nullptr));
        emailError->setText(QString());
        label_3->setText(QCoreApplication::translate("EditOrChangeWindow", "E-mail", nullptr));
        label_4->setText(QCoreApplication::translate("EditOrChangeWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("EditOrChangeWindow", "\320\224\320\260\321\202\320\260 \320\262\320\275\320\265\321\201\320\265\320\275\320\270\321\217", nullptr));
        dateError->setText(QString());
        cancelButton->setText(QCoreApplication::translate("EditOrChangeWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        OKButton->setText(QCoreApplication::translate("EditOrChangeWindow", "\320\236\320\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditOrChangeWindow: public Ui_EditOrChangeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORCHANGEWINDOW_H
