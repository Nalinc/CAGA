#include "dialog_ca.h"
#include "ui_dialog_ca.h"
#include <iostream>

using namespace std;
Dialog_ca::Dialog_ca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_ca)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(255,255,255);color: rgb(0,0,0)");
    this->setFixedSize(500,400);
    this->setStyleSheet("background-image: url(Resources/ca_wall.jpg)");

    ui->btn_close->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg) ");
    ui->pushButton->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->pushButton_2->setStyleSheet("color:  white;background-image: url(Resources/btn_bg.jpg)");
    ui->label->setStyleSheet("color: white;background-color: rgb(0,0,0)");
    ui->label_2->setStyleSheet("color: white;background-color: rgb(0,0,0)");
    ui->label_3->setStyleSheet("color: white;background-color: rgb(0,0,0)");
    ui->label_4->setStyleSheet("color: white;background-color: rgb(0,0,0)");
}

Dialog_ca::~Dialog_ca()
{
    delete ui;
}

void Dialog_ca::on_pushButton_clicked()
{
    QString str1=ui->lineEdit->text();
    string s1=str1.toAscii().data();

    QString str2=ui->lineEdit_2->text();
    string s2=str2.toAscii().data();

    string cmd="./bin/main -f "+s1+" "+s2;

//    cout<<cmd<<endl;
    system(cmd.c_str());

}

void Dialog_ca::on_pushButton_2_clicked()
{
    system("./bin/main -ga");
}
