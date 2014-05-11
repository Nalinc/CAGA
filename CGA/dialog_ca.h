#ifndef DIALOG_CA_H
#define DIALOG_CA_H

#include <QDialog>

namespace Ui {
class Dialog_ca;
}

class Dialog_ca : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_ca(QWidget *parent = 0);
    ~Dialog_ca();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_ca *ui;
};

#endif // DIALOG_CA_H
