/********************************************************************************
** Form generated from reading UI file 'dialog_credits.ui'
**
** Created: Tue May 6 22:31:22 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CREDITS_H
#define UI_DIALOG_CREDITS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_credits
{
public:
    QPushButton *btn_close;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *Dialog_credits)
    {
        if (Dialog_credits->objectName().isEmpty())
            Dialog_credits->setObjectName(QString::fromUtf8("Dialog_credits"));
        Dialog_credits->resize(450, 300);
        btn_close = new QPushButton(Dialog_credits);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(170, 260, 103, 28));
        label = new QLabel(Dialog_credits);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 60, 111, 18));
        label_2 = new QLabel(Dialog_credits);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 101, 18));
        label_3 = new QLabel(Dialog_credits);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 100, 131, 18));
        label_4 = new QLabel(Dialog_credits);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 120, 131, 18));
        label_5 = new QLabel(Dialog_credits);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 40, 171, 18));
        label_6 = new QLabel(Dialog_credits);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 160, 191, 18));
        label_7 = new QLabel(Dialog_credits);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 180, 131, 18));
        label_8 = new QLabel(Dialog_credits);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 200, 161, 18));

        retranslateUi(Dialog_credits);
        QObject::connect(btn_close, SIGNAL(clicked()), Dialog_credits, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog_credits);
    } // setupUi

    void retranslateUi(QDialog *Dialog_credits)
    {
        Dialog_credits->setWindowTitle(QApplication::translate("Dialog_credits", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_close->setText(QApplication::translate("Dialog_credits", "Close", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_credits", "1) Abha Suhag", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_credits", "2) M Mahesh", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_credits", "3) Nalin Chhibber", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_credits", "4) Somi Makhija", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog_credits", "Project Developed By:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog_credits", "Under The Supervision Of:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog_credits", "1) Ms Shalini Jain", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog_credits", "[Assistant Professor]", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_credits: public Ui_Dialog_credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CREDITS_H
