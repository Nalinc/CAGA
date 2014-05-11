#include "dialog_help.h"
#include "ui_dialog_help.h"

Dialog_help::Dialog_help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_help)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(255,255,255);color: rgb(0,0,0)");
    this->setFixedSize(500,500);
    this->setStyleSheet("background-image: url(Resources/bg_help.jpg)");

    ui->btn_close->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_bg->setStyleSheet("background-image: url(Resources/help1.png)");
    ui->label->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_2->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_3->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_4->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_5->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_6->setStyleSheet("color: white; background-color: rgb(0,0,0)");

}

Dialog_help::~Dialog_help()
{
    delete ui;
}

void Dialog_help::on_btn_1_clicked()
{
    ui->label_bg->setStyleSheet("background-image: url(Resources/1.jpg)");
}

void Dialog_help::on_btn_2_clicked()
{
    ui->label_bg->setStyleSheet("background-image: url(Resources/2.jpg)");
}

void Dialog_help::on_btn_3_clicked()
{
    ui->label_bg->setStyleSheet("background-image: url(Resources/3.jpg)");
}

void Dialog_help::on_btn_4_clicked()
{
    ui->label_bg->setStyleSheet("background-image: url(Resources/4.jpg)");
}

void Dialog_help::on_btn_5_clicked()
{
    ui->label_bg->setStyleSheet("background-image: url(Resources/5.jpg)");
}
