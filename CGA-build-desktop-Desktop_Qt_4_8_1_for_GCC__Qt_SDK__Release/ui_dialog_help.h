/********************************************************************************
** Form generated from reading UI file 'dialog_help.ui'
**
** Created: Wed May 7 03:59:34 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_HELP_H
#define UI_DIALOG_HELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_help
{
public:
    QPushButton *btn_close;
    QLabel *label_bg;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_4;
    QPushButton *btn_5;

    void setupUi(QDialog *Dialog_help)
    {
        if (Dialog_help->objectName().isEmpty())
            Dialog_help->setObjectName(QString::fromUtf8("Dialog_help"));
        Dialog_help->resize(500, 500);
        btn_close = new QPushButton(Dialog_help);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(200, 470, 103, 28));
        label_bg = new QLabel(Dialog_help);
        label_bg->setObjectName(QString::fromUtf8("label_bg"));
        label_bg->setGeometry(QRect(10, 210, 480, 250));
        label = new QLabel(Dialog_help);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 231, 18));
        label_2 = new QLabel(Dialog_help);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 60, 431, 18));
        label_3 = new QLabel(Dialog_help);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 80, 431, 18));
        label_4 = new QLabel(Dialog_help);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 100, 331, 18));
        label_5 = new QLabel(Dialog_help);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 140, 361, 18));
        label_6 = new QLabel(Dialog_help);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 120, 391, 18));
        btn_1 = new QPushButton(Dialog_help);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setGeometry(QRect(40, 60, 16, 16));
        btn_2 = new QPushButton(Dialog_help);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setGeometry(QRect(40, 80, 16, 16));
        btn_3 = new QPushButton(Dialog_help);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setGeometry(QRect(40, 100, 16, 16));
        btn_4 = new QPushButton(Dialog_help);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setGeometry(QRect(40, 120, 16, 16));
        btn_5 = new QPushButton(Dialog_help);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setGeometry(QRect(40, 140, 16, 16));

        retranslateUi(Dialog_help);
        QObject::connect(btn_close, SIGNAL(clicked()), Dialog_help, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog_help);
    } // setupUi

    void retranslateUi(QDialog *Dialog_help)
    {
        Dialog_help->setWindowTitle(QApplication::translate("Dialog_help", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_close->setText(QApplication::translate("Dialog_help", "Close", 0, QApplication::UnicodeUTF8));
        label_bg->setText(QString());
        label->setText(QApplication::translate("Dialog_help", "User Interface Components", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_help", "1) Cryptosystem: Generate Training data using Affine ciphers", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_help", "2) Cryptanalysis: Perform frequency analysis & GA", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_help", "3) Statistics:  View n-gram and fitness plots", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog_help", "5) Help: Project assistance & overview ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog_help", "4) Credits: Project team & supervisor details", 0, QApplication::UnicodeUTF8));
        btn_1->setText(QString());
        btn_2->setText(QString());
        btn_3->setText(QString());
        btn_4->setText(QString());
        btn_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_help: public Ui_Dialog_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_HELP_H
