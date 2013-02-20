#include "goods.h"
#include "ui_goods.h"

goods::goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::goods)
{
    ui->setupUi(this);
}

goods::~goods()
{
    delete ui;
}
