#include "mainwindow.h"
#include "apue_db.h"
#include "apue.h"
#include <QApplication>
#include <fcntl.h>
#include <QErrorMessage>

int err_prompt(QString prompt)
{
    QErrorMessage errorMessage;
    errorMessage.showMessage(prompt);
    errorMessage.exec();
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    DBHANDLE    db;

    if ((db = db_open("db4", O_RDWR | O_CREAT | O_TRUNC,
      FILE_MODE)) == NULL)
        err_prompt("db_open error");

//    if (db_store(db, "Alpha", "data1", DB_INSERT) != 0)
//        err_prompt("db_store error for alpha");
//    if (db_store(db, "beta", "Data for beta", DB_INSERT) != 0)
//        err_prompt("db_store error for beta");
//    if (db_store(db, "gamma", "record3", DB_INSERT) != 0)
//        err_prompt("db_store error for gamma");

//    db_close(db);
//    exit(0);

    return a.exec();
}
