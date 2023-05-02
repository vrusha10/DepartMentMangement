#ifndef ELECTRONICDP_H
#define ELECTRONICDP_H

#include <QDialog>
#include "Dbase/db.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QVector>
#include <QDebug>

namespace Ui {
class ElectronicDP;
}

class ElectronicDP : public QDialog
{
    Q_OBJECT

public:
    explicit ElectronicDP(QWidget *parent = nullptr);
    ~ElectronicDP();


private slots:
    void on_ElectronicSavePB_clicked();
    void on_ElectronicBackPB_clicked();
    void on_ElectronicPB_clicked();

private:
    Ui::ElectronicDP *ui;
    db *d;
    MainWindow *eleback;
    QVector<QString>v,es;
};

#endif // ELECTRONICDP_H
