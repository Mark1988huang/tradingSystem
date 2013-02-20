#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>

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
    void on_pushButton_clicked();

private:
    Ui::UserWindow *ui;
};

#endif // USERWINDOW_H
