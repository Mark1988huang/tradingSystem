#ifndef INVENTORYWINDOW_H
#define INVENTORYWINDOW_H

#include <QMainWindow>

namespace Ui {
class inventoryWindow;
}

class inventoryWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit inventoryWindow(QWidget *parent = 0);
    ~inventoryWindow();
    
private:
    Ui::inventoryWindow *ui;
};

#endif // INVENTORYWINDOW_H
