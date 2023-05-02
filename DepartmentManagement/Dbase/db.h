#pragma once

#include<iostream>
#include<QString>
#include<QSqlDatabase>
#include<QObject>
using namespace std;
class db:public QObject
{
    Q_OBJECT
public:

    db(const QString& path);
    db();
    ~db();
    bool isOpen() const;
    bool createTable();
    bool removeAllData();
    void addPerson( const QVector<QString>&);
    void addElectricalPerson(const QVector<QString>&);
    void addCivilPerson(const QVector<QString>&);
    void addMechanicalPerson(const QVector<QString>&);
    void addITPerson(const QVector<QString>&);
    QVector<QString>accessElectronic ()const;
    QVector<QString>accessElectrical() const;
    QVector<QString>accessIT ()const;
    QVector<QString>accessMechanical()const;
    QVector<QString>accessCivil() const;

public slots:

     bool addData();
//     void callFun();
signals:
//     void onElectricalData();

private:
    QSqlDatabase  d;
//    bool isElectrical;

};

