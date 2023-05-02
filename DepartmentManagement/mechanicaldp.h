#ifndef MECHANICALDP_H
#define MECHANICALDP_H

#include <QDialog>
#include "Dbase/db.h"
#include "overviewpc.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QVector>
#include <QDebug>

namespace Ui {
class MechanicalDP;
}

class MechanicalDP : public QDialog
{
    Q_OBJECT

public:
    explicit MechanicalDP(QWidget *parent = nullptr);
    ~MechanicalDP();

private slots:
    void on_MechanicalPB_clicked();
    void on_MechanicalBackPB_clicked();
    void on_MechanicalSavePB_clicked();

private:
    Ui::MechanicalDP *ui;
    QVector<QString>m;
        db *md;
        MainWindow *mecBack;
};

#endif // MECHANICALDP_H
