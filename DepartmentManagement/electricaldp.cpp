#include "electricaldp.h"
#include "ui_electricaldp.h"

ElectricalDP::ElectricalDP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ElectricalDP)
{
    ui->setupUi(this);
}

ElectricalDP::~ElectricalDP()
{
    delete ui;
}

void ElectricalDP::on_ElectricalPB_clicked()
{
    close();
}

void ElectricalDP::on_ElectricalBackPB_clicked()
{
    electricBack =new MainWindow(this);
    electricBack->show();
    hide();
}

void ElectricalDP::on_ElectricalSavePB_clicked()
{
    QString name=ui->lineEdit->text();
    ui->lineEdit->clear();
    if(name=="")
    {
        QMessageBox::warning(this,"","Please Fill Name");
    }
    else {
        QMessageBox::information(this,"","Name Saved Sucessfully");
    }
    el.push_back(name);
    qDebug()<<"Electrical Department: "<<el;
    del->addElectricalPerson(el);
}

