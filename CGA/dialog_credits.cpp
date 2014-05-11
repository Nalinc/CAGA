#include "dialog_credits.h"
#include "ui_dialog_credits.h"

Dialog_credits::Dialog_credits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_credits)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(255,255,255);color: rgb(0,0,0)");
    this->setFixedSize(450,300);
    this->setStyleSheet("background-image: url(Resources/bgc.png)");

    ui->btn_close->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_2->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_3->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_4->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_5->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_6->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_7->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_8->setStyleSheet("color: white; background-color: rgb(0,0,0)");

}

Dialog_credits::~Dialog_credits()
{
    delete ui;
}
