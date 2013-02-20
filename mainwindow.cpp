#include "mainwindow.h"
#include "goods.h"
#include "userwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_userButton_clicked()
{
//    UserWindow *u= new UserWindow;
//    u->show();
    UserWindow u;
    u.show();
}

void MainWindow::on_goodsButton_clicked()
{
}

void MainWindow::on_quitButton_clicked()
{
    qApp->quit();
}
