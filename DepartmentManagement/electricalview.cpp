#include "electricalview.h"
#include "ui_electricalview.h"
#include "overviewpc.h"
#include <QVector>
#include <QListWidgetItem>
#include <QDebug>

QVector<QString>sel;

ElectricalView::ElectricalView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ElectricalView)
{
    ui->setupUi(this);
}

ElectricalView::~ElectricalView()
{
    delete ui;
}

void ElectricalView::on_ElectricalViewClose_clicked()
{
    close();
}

void ElectricalView::showElectrical()
{
    sel=ve->accessElectrical();
    int count=0;
    for(int i=0;i<sel.size();i++)
    {
        count++;
    }
    qDebug()<<"Electrical Percentage: "<<count%100<<"%";

    for(auto el: sel)
    {
        ui->ElectricallistWidget->addItem(el);
        qDebug()<<"Electrical Db Vector Read: "<<el;
    }
}
