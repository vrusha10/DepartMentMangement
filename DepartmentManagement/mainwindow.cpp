#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "electronicdp.h"
#include "electricaldp.h"
#include "mechanicaldp.h"
#include "itdp.h"
#include "civildp.h"
#include "overviewpc.h"
#include "Dbase/db.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ElectronicPB_clicked()
{
   ElectronicDP electronic;
   electronic.setModal(true);
   electronic.exec();
}


void MainWindow::on_MainWindowClosePB_clicked()
{
    close();
}


void MainWindow::on_ElectricalPB_clicked()
{
    ElectricalDP electrical;
    electrical.setModal(true);
    electrical.exec();
}


void MainWindow::on_ITPB_clicked()
{
    ItDp it;
    it.setModal(true);
    it.exec();
}


void MainWindow::on_MechanicalPB_clicked()
{
    MechanicalDP mechanical;
    mechanical.setModal(true);
    mechanical.exec();
}


void MainWindow::on_CivilDP_clicked()
{
    CivilDP civil;
    civil.setModal(true);
    civil.exec();
}

void MainWindow::on_OverViewPB_clicked()
{
    d->addData();
    OverviewPC ov;
    ov.setModal(true);
    ov.exec();

}

