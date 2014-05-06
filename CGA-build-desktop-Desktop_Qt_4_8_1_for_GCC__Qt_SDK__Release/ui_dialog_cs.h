/********************************************************************************
** Form generated from reading UI file 'dialog_cs.ui'
**
** Created: Wed May 7 02:19:36 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CS_H
#define UI_DIALOG_CS_H

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

class Ui_Dialog_cs
{
public:
    QPushButton *btn_close;
    QPushButton *btn_gen;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Dialog_cs)
    {
        if (Dialog_cs->objectName().isEmpty())
            Dialog_cs->setObjectName(QString::fromUtf8("Dialog_cs"));
        Dialog_cs->resize(500, 400);
        btn_close = new QPushButton(Dialog_cs);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(200, 370, 103, 28));
        btn_gen = new QPushButton(Dialog_cs);
        btn_gen->setObjectName(QString::fromUtf8("btn_gen"));
        btn_gen->setGeometry(QRect(370, 240, 103, 28));
        lineEdit = new QLineEdit(Dialog_cs);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 240, 341, 28));
        label = new QLabel(Dialog_cs);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 20, 141, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(Dialog_cs);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 441, 18));
        label_3 = new QLabel(Dialog_cs);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 110, 171, 18));
        label_4 = new QLabel(Dialog_cs);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 140, 491, 18));
        label_5 = new QLabel(Dialog_cs);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 300, 101, 18));

        retranslateUi(Dialog_cs);
        QObject::connect(btn_close, SIGNAL(clicked()), Dialog_cs, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog_cs);
    } // setupUi

    void retranslateUi(QDialog *Dialog_cs)
    {
        Dialog_cs->setWindowTitle(QApplication::translate("Dialog_cs", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_close->setText(QApplication::translate("Dialog_cs", "Close", 0, QApplication::UnicodeUTF8));
        btn_gen->setText(QApplication::translate("Dialog_cs", "Generate", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_cs", "Affine Cipher", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_cs", "This module generates the 'training data' for cryptanalysis", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_cs", "Enter plain-text below", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_cs", "Training set shall be appended at: \"<project_root>/data/TSet.dat\" ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_cs: public Ui_Dialog_cs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CS_H
