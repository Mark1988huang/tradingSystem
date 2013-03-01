#include "mainwindow.h"
#include "goods.h"
#include "userwindow.h"
#include "ui_mainwindow.h"
#include "string.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->userLine->setMaxLength(16);
    ui->passLine->setMaxLength(16);
//    ui->loged->~QVBoxLayout();
//    ui->progressBar->hide();
//    ui->welcomeMsg->hide();
//    ui->logoutButton->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_userButton_clicked()
{
    UserWindow *u= new UserWindow;
    u->show();
}

void MainWindow::on_goodsButton_clicked()
{
}

void MainWindow::on_quitButton_clicked()
{
    qApp->quit();
}

void MainWindow::on_loginButton_clicked()
{
    QString name,pass;
    name = ui->userLine->text();
    pass = ui->passLine->text();
    if (name == "admin" && pass == "admin") {
        on_userButton_clicked();
        ui->userLine->setText("");
        ui->passLine->setText("");
//        name.~QString();
//        pass.~QString();
    }
}
