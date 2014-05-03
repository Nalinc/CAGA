#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    ui->btn_cfg->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->btn_credits->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->btn_help->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->btn_plots->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");

}

MainWindow::~MainWindow()
{
    delete ui;
}
