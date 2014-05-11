#ifndef DIALOG_CREDITS_H
#define DIALOG_CREDITS_H

#include <QDialog>

namespace Ui {
class Dialog_credits;
}

class Dialog_credits : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_credits(QWidget *parent = 0);
    ~Dialog_credits();
    
private:
    Ui::Dialog_credits *ui;
};

#endif // DIALOG_CREDITS_H
