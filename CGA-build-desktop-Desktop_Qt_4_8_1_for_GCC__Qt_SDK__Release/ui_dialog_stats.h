/********************************************************************************
** Form generated from reading UI file 'dialog_stats.ui'
**
** Created: Wed May 7 01:04:39 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_STATS_H
#define UI_DIALOG_STATS_H

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

class Ui_Dialog_stats
{
public:
    QPushButton *btn_close;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_stats)
    {
        if (Dialog_stats->objectName().isEmpty())
            Dialog_stats->setObjectName(QString::fromUtf8("Dialog_stats"));
        Dialog_stats->resize(500, 400);
        btn_close = new QPushButton(Dialog_stats);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(190, 370, 103, 28));
        label = new QLabel(Dialog_stats);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 73, 261, 18));
        label_2 = new QLabel(Dialog_stats);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 290, 151, 18));
        lineEdit = new QLineEdit(Dialog_stats);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 290, 121, 21));
        pushButton = new QPushButton(Dialog_stats);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 70, 103, 21));
        pushButton_2 = new QPushButton(Dialog_stats);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 290, 103, 21));

        retranslateUi(Dialog_stats);
        QObject::connect(btn_close, SIGNAL(clicked()), Dialog_stats, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog_stats);
    } // setupUi

    void retranslateUi(QDialog *Dialog_stats)
    {
        Dialog_stats->setWindowTitle(QApplication::translate("Dialog_stats", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_close->setText(QApplication::translate("Dialog_stats", "Close", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_stats", "1) Chromosomes Fitness Variation", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_stats", "2) N-gram Statistics", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog_stats", "View Plot", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Dialog_stats", "View Plot", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_stats: public Ui_Dialog_stats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_STATS_H
