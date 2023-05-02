#include "electronicview.h"
#include "ui_electronicview.h"
#include "overviewpc.h"
#include <QDebug>
#include <QVector>
#include <QListWidgetItem>

QVector<QString>se;

ElectronicView::ElectronicView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ElectronicView)
{
    ui->setupUi(this);
}

ElectronicView::~ElectronicView()
{
    delete ui;
}

void ElectronicView::on_ElectronicViewClose_clicked()
{
    close();
}

void ElectronicView::showElectronic()
{
    se=dg->accessElectronic();
    int count=0;
    for(int i=0;i<se.size();i++)
    {
        count++;
    }
    qDebug()<<"Electronic Percentage:"<<count%100<<"%";

    for(auto e:se)
    {
        ui->EletroniclistWidget->addItem(e);
        qDebug()<<"Electronic Db Vector Read: "<<e;
    }
}

