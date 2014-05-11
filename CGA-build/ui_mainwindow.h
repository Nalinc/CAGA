/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue May 6 22:08:03 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_0;
    QLabel *label_1;
    QPushButton *btn_credits;
    QPushButton *btn_help;
    QPushButton *btn_cs;
    QPushButton *btn_ca;
    QPushButton *btn_plots;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(780, 479);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_0 = new QLabel(centralWidget);
        label_0->setObjectName(QString::fromUtf8("label_0"));
        label_0->setGeometry(QRect(340, 10, 451, 27));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(16);
        label_0->setFont(font);
        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(490, 40, 291, 27));
        label_1->setFont(font);
        btn_credits = new QPushButton(centralWidget);
        btn_credits->setObjectName(QString::fromUtf8("btn_credits"));
        btn_credits->setGeometry(QRect(30, 420, 101, 31));
        btn_help = new QPushButton(centralWidget);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setGeometry(QRect(30, 380, 101, 31));
        btn_cs = new QPushButton(centralWidget);
        btn_cs->setObjectName(QString::fromUtf8("btn_cs"));
        btn_cs->setGeometry(QRect(660, 306, 121, 31));
        btn_ca = new QPushButton(centralWidget);
        btn_ca->setObjectName(QString::fromUtf8("btn_ca"));
        btn_ca->setGeometry(QRect(660, 260, 121, 31));
        btn_plots = new QPushButton(centralWidget);
        btn_plots->setObjectName(QString::fromUtf8("btn_plots"));
        btn_plots->setGeometry(QRect(660, 120, 121, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 780, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_0->setText(QApplication::translate("MainWindow", "CRYPTANALYSIS OF SUBSTITUTION CIPHERS", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("MainWindow", "USING GENETIC ALGORITHM", 0, QApplication::UnicodeUTF8));
        btn_credits->setText(QApplication::translate("MainWindow", "Credits", 0, QApplication::UnicodeUTF8));
        btn_help->setText(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        btn_cs->setText(QApplication::translate("MainWindow", "Cryptosystem", 0, QApplication::UnicodeUTF8));
        btn_ca->setText(QApplication::translate("MainWindow", "Cryptanalysis", 0, QApplication::UnicodeUTF8));
        btn_plots->setText(QApplication::translate("MainWindow", "Statistics", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
