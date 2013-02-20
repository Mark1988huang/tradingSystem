#include "user.h"
#include "ui_user.h"
#include "mainwindow.h"

user::user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

void user::on_pushButton_clicked()
{
//    this->~user();
//    userS.release();
}
