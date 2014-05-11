#ifndef DIALOG_CS_H
#define DIALOG_CS_H

#include <QDialog>

namespace Ui {
class Dialog_cs;
}

class Dialog_cs : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_cs(QWidget *parent = 0);
    ~Dialog_cs();
    
private slots:
    void on_btn_gen_clicked();

private:
    Ui::Dialog_cs *ui;
};

#endif // DIALOG_CS_H
