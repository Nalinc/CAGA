#include "dialog_cs.h"
#include "ui_dialog_cs.h"
#include<iostream>

using namespace std;
Dialog_cs::Dialog_cs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_cs)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(255,255,255);color: rgb(0,0,0)");
    this->setFixedSize(500,400);
    this->setStyleSheet("background-image: url(Resources/bg_help.jpg)");

    ui->btn_close->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->btn_gen->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_5->setStyleSheet("color: green;background-color: rgb(0,0,0)");
    ui->label_4->setStyleSheet("color: white;background-color: rgb(0,0,0)");
    ui->label_3->setStyleSheet("color: white;background-color: rgb(0,0,0)");
    ui->label_2->setStyleSheet("color: white;background-color: rgb(0,0,0)");
    ui->label->setStyleSheet("color: red;background-color: rgb(0,0,0)");
}

Dialog_cs::~Dialog_cs()
{
    delete ui;
}

void Dialog_cs::on_btn_gen_clicked()
{
    ui->label_5->setText("      Done!");
    QString str=ui->lineEdit->text();
    string s=str.toAscii().data();

    string cmd="./bin/main -t "+s;
//    cout<<cmd<<endl;
    system(cmd.c_str());
}
