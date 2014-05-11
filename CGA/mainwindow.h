#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_btn_plots_clicked();

    void on_btn_cs_clicked();

    void on_btn_ca_clicked();

    void on_btn_help_clicked();

    void on_btn_credits_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
