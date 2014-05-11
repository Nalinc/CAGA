#ifndef DIALOG_HELP_H
#define DIALOG_HELP_H

#include <QDialog>

namespace Ui {
class Dialog_help;
}

class Dialog_help : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_help(QWidget *parent = 0);
    ~Dialog_help();
    
private slots:
    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

private:
    Ui::Dialog_help *ui;
};

#endif // DIALOG_HELP_H
