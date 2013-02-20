#ifndef GOODS_H
#define GOODS_H

#include <QDialog>

namespace Ui {
class goods;
}

class goods : public QDialog
{
    Q_OBJECT
    
public:
    explicit goods(QWidget *parent = 0);
    ~goods();
    
private:
    Ui::goods *ui;
};

#endif // GOODS_H
