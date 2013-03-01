#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>

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
    void on_userButton_clicked();

    void on_goodsButton_clicked();

    void on_quitButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
