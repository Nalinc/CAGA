#include "dialog_stats.h"
#include "ui_dialog_stats.h"
#include <string.h>
#include <iostream>

using namespace std;
Dialog_stats::Dialog_stats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_stats)
{
    ui->setupUi(this);
    this->setFixedSize(500,400);
    this->setStyleSheet("background-image: url(Resources/wall.png)");
    ui->pushButton->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->pushButton_2->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->btn_close->setStyleSheet("color: white;background-image: url(Resources/btn_bg.jpg)");
    ui->label->setStyleSheet("color: white; background-color: rgb(0,0,0)");
    ui->label_2->setStyleSheet("color: white; background-color: rgb(0,0,0)");

}

Dialog_stats::~Dialog_stats()
{
    delete ui;
}

void Dialog_stats::on_pushButton_2_clicked()
{
   QString str=ui->lineEdit->text();
   string s=str.toAscii().data();

   string s1="gnuplot ./GNUPlot/up.gpl   < ./frequencyanalysis/uni/"+s;
   string s2="gnuplot ./GNUPlot/bp.gpl   < ./frequencyanalysis/bi/"+s;
   string s3="gnuplot ./GNUPlot/tp.gpl   < ./frequencyanalysis/tri/"+s;

//   cout<<s1<<endl;
//   cout<<s2<<endl;
//   cout<<s3<<endl;

   system(s1.c_str());
   system(s2.c_str());
   system(s3.c_str());

   system("nohup eog ./frequencyanalysis/uni_plot.png");

}

void Dialog_stats::on_pushButton_clicked()
{
    system("./src/script.sh");
    system("gnuplot ./GNUPlot/fitp.gpl < ./src/fitness.dat");
    system("nohup eog fitness_plot.png");
}
