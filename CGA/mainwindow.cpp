#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_credits.h"
#include "dialog_help.h"
#include "dialog_stats.h"
#include "dialog_ca.h"
#include "dialog_cs.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800,470);
    this->setStyleSheet("background-image: url(Resources/bg.jpg)");
    ui->label_0->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->label_1->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");

    ui->btn_ca->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->btn_cs->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->btn_credits->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->btn_help->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->btn_plots->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_plots_clicked()
{
  Dialog_stats obj;
  obj.setModal(true);
  obj.exec();

}

void MainWindow::on_btn_cs_clicked()
{
    Dialog_cs obj;
    obj.setModal(true);
    obj.exec();

}

void MainWindow::on_btn_ca_clicked()
{
    Dialog_ca obj;
    obj.setModal(true);
    obj.exec();

}

void MainWindow::on_btn_help_clicked()
{
 //   Dialog_Help obj;
    Dialog_help obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_btn_credits_clicked()
{
//    Dialog_howto obj;
    Dialog_credits obj;
    obj.setModal(true);
    obj.exec();

}
