
#include "db.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>
#include <QVector>

QVector<QString>e,el,c,m,i;
//bool isElectrical;

db::db(const QString &path)
{
    d=QSqlDatabase::addDatabase("QSQLITE");
    d.setDatabaseName(path);
    if (!d.open())
    {
        qDebug()<<"Error: connection with database fail";
    }
    else
    {
        qDebug()<<"Database: connection ok";
    }
//    if(isElectrical == true)
//    {
//        addData();
//    }
}

db::db(){
//    createTable();
}
db::~db()
{
    if (d.isOpen())
    {     
        d.close();
    }
}

bool db::isOpen() const
{
    return d.isOpen();
}
/********************************************Create Db Table************************************************/
bool db::createTable()
{
    bool success = false;
    QSqlQuery query;
    query.prepare("CREATE TABLE deptinfo(id INTEGER PRIMARY KEY,Electronic TEXT,Electrical TEXT,IT TEXT,Mechanical TEXT,Civil TEXT);");
    if (!query.exec())
    {
        qDebug()<< "Couldn't create the table 'deptinfo': one might already exist.";
        success=false;
    }
    qDebug()<<"DbTable Created";
    return success;
}
/********************************************Create Db Table************************************************/

/********************************************Stored Data Db Table************************************************/
bool db::addData()
{
        bool success = false;
        QString j=e.value(0);
        QString k=el.value(0);
        QString l=i.value(0);
        QString m1=m.value(0);
        QString n=c.value(0);

        if (!j.isEmpty())
        {
            QSqlQuery queryAdd;
            queryAdd.prepare("INSERT INTO deptinfo(Electronic,Electrical,IT,Mechanical,Civil) VALUES (:j,:k,:l,:m1,:n)");
            queryAdd.bindValue(":j", j);
            queryAdd.bindValue(":k", k);
            queryAdd.bindValue(":l", l);
            queryAdd.bindValue(":m1", m1);
            queryAdd.bindValue(":n", n);
            if(queryAdd.exec())
            {
                success = true;
            }
            else
            {
                qDebug() << "add deptinfo failed: " << queryAdd.lastError();
            }
        }
        else
        {
            qDebug() << "add deptinfo failed: name cannot be empty";
        }
        return success;
}
/********************************************Stored Data Db Table************************************************/

/********************************************Access Electronic Data in Db Table************************************************/
void db::addPerson(const QVector<QString>&Electronic)
{
        e=Electronic;
}
/********************************************Access Electronic Data in Db Table************************************************/

/********************************************Access Electrical Data in Db Table************************************************/
void db::addElectricalPerson(const QVector<QString>& Electrical)
{
//    isElectrical=true;
     el=Electrical;

}
/********************************************Access Electrical Data in Db Table************************************************/

/********************************************Access Civil Data in Db Table************************************************/
void db::addCivilPerson(const QVector<QString>& Civil)
{
      c=Civil;
//      addData();
}
/********************************************Access Civil Data in Db Table************************************************/

/********************************************Access Mechanical Data in Db Table************************************************/
void db::addMechanicalPerson(const QVector<QString>& Mechanical)
{
    m=Mechanical;
}
/********************************************Access Mechanical Data in Db Table************************************************/

/********************************************Access It Data in Db Table************************************************/
void db::addITPerson(const QVector<QString>&IT)
{
    i=IT;
}

//void db::callFun()
//{
//    addData();
//}
/********************************************Access It Data in Db Table************************************************/

/********************************************Read Electronic Data in Db Table************************************************/
QVector<QString> db::accessElectronic() const
{
    QVector<QString>ae;
    qDebug()<< "deptinfo in db:";
    QSqlQuery query("SELECT * FROM deptinfo");
    int idName = query.record().indexOf("Electronic");
    while (query.next()) {
        QString name = query.value(idName).toString();
        ae.append(name);
    }
    for(auto i:ae)
        qDebug()<<"AccessElectronic Db: "<<i;
    return ae;
}
/********************************************Read Electronic Data in Db Table************************************************/

/********************************************Read Electrical Data in Db Table************************************************/
QVector<QString> db::accessElectrical() const
{
    QVector<QString>ael;
    qDebug()<< "deptinfo in db:";
    QSqlQuery query("SELECT * FROM deptinfo");
    int idName = query.record().indexOf("Electrical");
    while (query.next()) {
        QString name = query.value(idName).toString();
        ael.append(name);
    }
    for(auto j:ael)
        qDebug()<<"AccessElectrical Db: "<<j;
    return ael;
}
/********************************************Read Electrical Data in Db Table************************************************/

/********************************************Read It Data in Db Table************************************************/
QVector<QString> db::accessIT() const
{
    QVector<QString>ai;
    qDebug()<< "deptinfo in db:";
    QSqlQuery query("SELECT * FROM deptinfo");
    int idName = query.record().indexOf("Civil");
    while (query.next()) {
        QString name = query.value(idName).toString();
        ai.append(name);
    }
    for(auto k:ai)
        qDebug()<<"AccessIT Db: "<<k;
    return ai;
}
/********************************************Read It Data in Db Table************************************************/


/********************************************Read Mechanical Data in Db Table************************************************/
QVector<QString> db::accessMechanical() const
{
    QVector<QString>am;
    qDebug()<< "deptinfo in db:";
    QSqlQuery query("SELECT * FROM deptinfo");
    int idName = query.record().indexOf("Mechanical");
    while (query.next()) {
        QString name = query.value(idName).toString();
        am.append(name);
    }
    for(auto l:am)
        qDebug()<<"AccessMechanical Db: "<<l;
    return am;
}
/********************************************Read Mechanical Data in Db Table************************************************/

/********************************************Read Civil Data in Db Table************************************************/
QVector<QString> db::accessCivil() const
{
    QVector<QString>ac;
    qDebug()<< "deptinfo in db:";
    QSqlQuery query("SELECT * FROM deptinfo");
    int idName = query.record().indexOf("Civil");
    while (query.next()) {
        QString name = query.value(idName).toString();
        ac.append(name);
    }
    for(auto l:ac)
        qDebug()<<"AccessCivil Db: "<<l;
    return ac;
}
/********************************************Read Civil Data in Db Table************************************************/


bool db::removeAllData()
{
    bool success = false;

    QSqlQuery removeQuery;
    removeQuery.prepare("DELETE FROM deptinfo");

    if (removeQuery.exec())
    {
        success = true;
    }
    else
    {
        qDebug() << "remove all Data failed: " << removeQuery.lastError();
    }

    return success;
}
