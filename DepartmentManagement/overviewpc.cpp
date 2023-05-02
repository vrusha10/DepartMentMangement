#include "overviewpc.h"
#include "ui_overviewpc.h"

QString es,els,is,ms,cs;

OverviewPC::OverviewPC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OverviewPC)
{
    ui->setupUi(this);
}

OverviewPC::~OverviewPC()
{
    delete ui;
}

void OverviewPC::on_ElectricalOV_clicked()
{
    ElectricalView *elev = new ElectricalView();
    elev->showElectrical();
    elev->show();
}
void OverviewPC::on_CivilOV_clicked()
{
    CivilView *cv = new CivilView();
    cv->showCivil();
    cv->show();
}


void OverviewPC::on_MechanicalOV_clicked()
{

    MechanicalView *mv = new MechanicalView();
    mv->showMechanical();
    mv->show();
}


void OverviewPC::on_ItOV_clicked()
{

    ItView *iv = new ItView();
    iv->showIT();
    iv->show();
}

void OverviewPC::on_ElectronicOV_clicked()
{
     ElectronicView *ev = new ElectronicView();
     ev->showElectronic();
     ev->show();
}

void OverviewPC::on_CloseOV_clicked()
{
    close();
}
