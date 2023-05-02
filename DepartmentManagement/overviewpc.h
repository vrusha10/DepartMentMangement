#ifndef OVERVIEWPC_H
#define OVERVIEWPC_H

#include "electronicview.h"
#include "electricalview.h"
#include "itview.h"
#include "mechanicalview.h"
#include "civilview.h"
#include "electricaldp.h"
#include "electronicdp.h"
#include "civildp.h"
#include "mechanicaldp.h"
#include "itdp.h"
#include "Dbase/db.h"
#include <QDebug>
#include <QWidget>
#include <QObject>
#include <QVector>
#include <QDialog>
#include <QMessageBox>
#include "civildp.h"

namespace Ui {
class OverviewPC;
}

class OverviewPC : public QDialog
{
    Q_OBJECT

public:
    explicit OverviewPC(QWidget *parent = nullptr);
    ~OverviewPC();
    void CivildpVector(QVector<QString>);

private slots:
     void on_CloseOV_clicked();
     void on_ElectronicOV_clicked();
     void on_ItOV_clicked();
     void on_MechanicalOV_clicked();
     void on_CivilOV_clicked();
     void on_ElectricalOV_clicked();

private:
    Ui::OverviewPC *ui;
    db *od;
    QVector<QString> de,del,dc,dm,di;
};

#endif // OVERVIEWPC_H
