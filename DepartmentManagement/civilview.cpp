#include "civilview.h"
#include "ui_civilview.h"
#include "overviewpc.h"
#include <QVector>
#include <QListWidgetItem>
#include <QDebug>

QVector<QString>sc;
QString s1;
CivilView::CivilView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CivilView)
{
    ui->setupUi(this);
}

CivilView::~CivilView()
{
    delete ui;
}

void CivilView::on_CivilViewClose_clicked()
{
    close();
}

void CivilView::showCivil()
{
    sc=ed->accessCivil();
    int count=0;
    for(int i=0;i<sc.size();i++)
    {
        count++;
    }
    qDebug()<<"Civil Percentage: "<<count%100<<"%";

    for(auto c:sc)
    {
        ui->CivillistWidget->addItem(c);
        qDebug()<<"Civil Db Vector Read: "<<c;
    }
}

