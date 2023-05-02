#include "mainwindow.h"
#include "Dbase/db.h"
//#include <QtSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>
#include <QApplication>

static const QString path="deptinfo.db";
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    db obj(path);
    MainWindow w;
    w.show();
    if(obj.isOpen())
    {
      obj.createTable();
//      obj.removeAllData();
    }
    return a.exec();
}
