#ifndef ELECTRICALDP_H
#define ELECTRICALDP_H

#include <QDialog>
#include "Dbase/db.h"
#include "overviewpc.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QVector>
#include <QDebug>


namespace Ui {
class ElectricalDP;
}

class ElectricalDP : public QDialog
{
    Q_OBJECT

public:
    explicit ElectricalDP(QWidget *parent = nullptr);
    ~ElectricalDP();

private slots:
    void on_ElectricalPB_clicked();
    void on_ElectricalBackPB_clicked();
    void on_ElectricalSavePB_clicked();

private:
    Ui::ElectricalDP *ui;
    db *del;
    MainWindow *electricBack;
    QVector<QString>el;
};

#endif // ELECTRICALDP_H
