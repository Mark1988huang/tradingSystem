#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class UserWindow;
}

class UserWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit UserWindow(QWidget *parent = 0);
    ~UserWindow();
    
private slots:
    void on_returnButton_clicked();

private:
    Ui::UserWindow *ui;
    Ui::MainWindow *main;
};

#endif // USERWINDOW_H
