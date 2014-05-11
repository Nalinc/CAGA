/********************************************************************************
** Form generated from reading UI file 'dialog_ca.ui'
**
** Created: Wed May 7 03:01:16 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CA_H
#define UI_DIALOG_CA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_ca
{
public:
    QPushButton *btn_close;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Dialog_ca)
    {
        if (Dialog_ca->objectName().isEmpty())
            Dialog_ca->setObjectName(QString::fromUtf8("Dialog_ca"));
        Dialog_ca->resize(500, 400);
        btn_close = new QPushButton(Dialog_ca);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(200, 370, 103, 28));
        label = new QLabel(Dialog_ca);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 211, 18));
        lineEdit = new QLineEdit(Dialog_ca);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 60, 151, 21));
        lineEdit_2 = new QLineEdit(Dialog_ca);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 60, 151, 21));
        pushButton = new QPushButton(Dialog_ca);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 110, 101, 21));
        label_2 = new QLabel(Dialog_ca);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 250, 201, 18));
        pushButton_2 = new QPushButton(Dialog_ca);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 287, 103, 21));
        label_3 = new QLabel(Dialog_ca);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 90, 101, 18));
        label_4 = new QLabel(Dialog_ca);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(290, 90, 141, 18));

        retranslateUi(Dialog_ca);
        QObject::connect(btn_close, SIGNAL(clicked()), Dialog_ca, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog_ca);
    } // setupUi

    void retranslateUi(QDialog *Dialog_ca)
    {
        Dialog_ca->setWindowTitle(QApplication::translate("Dialog_ca", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_close->setText(QApplication::translate("Dialog_ca", "Close", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_ca", "Module: Frequency Analysis", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog_ca", "Go", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_ca", "Module: Genetic Algorithm", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Dialog_ca", "Initiate", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_ca", "Text/TSet.dat", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_ca", "filename/file.dat", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_ca: public Ui_Dialog_ca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CA_H
