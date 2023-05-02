#include "mechanicalview.h"
#include "ui_mechanicalview.h"
#include "overviewpc.h"
#include <QDebug>
#include <QVector>
#include <QListWidgetItem>

QVector<QString>sm;

MechanicalView::MechanicalView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MechanicalView)
{
    ui->setupUi(this);
}

MechanicalView::~MechanicalView()
{
    delete ui;
}

void MechanicalView::showMechanical()
{
    sm=dm->accessMechanical();
    int count=0;
    for(int i=0;i<sm.size();i++)
    {
        count++;
    }
    qDebug()<<"Mechanical Percentage: "<<count%100<<"%";

    for(auto m:sm)
    {
        ui->MechanicallistWidget->addItem(m);
        qDebug()<<"Mechanical Db Vector Read: "<<m;
    }
}

void MechanicalView::on_MechanicalViewClose_clicked()
{
    close();
}

