#ifndef CIVILDP_H
#define CIVILDP_H

#include <QDialog>
#include "Dbase/db.h"
#include "overviewpc.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QVector>
#include <QDebug>

class OverviewPC;
namespace Ui {
class CivilDP;
}

class CivilDP : public QDialog
{
    Q_OBJECT

public:
    explicit CivilDP(QWidget *parent = nullptr);
    ~CivilDP();

private slots:
    void on_CivilPB_clicked();
    void on_CivilBackPB_clicked();
    void on_CivilSavePB_clicked();

private:
    Ui::CivilDP *ui;
    db *d;
    MainWindow *cback;
    OverviewPC *op;
    QVector<QString>ec,c;


};

#endif // CIVILDP_H
