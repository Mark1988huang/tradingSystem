#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class adminWindow;
}

class adminWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit adminWindow(QWidget *parent = 0);
    ~adminWindow();
    
private:
    Ui::adminWindow *ui;
};

#endif // ADMINWINDOW_H
