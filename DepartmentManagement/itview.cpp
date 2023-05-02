#include "itview.h"
#include "ui_itview.h"
#include "overviewpc.h"
#include <QDebug>
#include <QVector>
#include <QListWidgetItem>


QVector<QString>sit;

ItView::ItView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItView)
{
    ui->setupUi(this);
}

ItView::~ItView()
{
    delete ui;
}

void ItView::on_ItViewClose_clicked()
{
    close();
}

void ItView::showIT()
{
    sit=di->accessIT();
    int count=0;
    for(int i=0;i<sit.size();i++)
    {
        count++;
    }
    qDebug()<<"It Percentage: "<<count%100<<"%";

    for(auto i:sit)
    {

        ui->ItlistWidget->addItem(i);
        qDebug()<<"It Db Vector Read: "<<i;
    }
}

