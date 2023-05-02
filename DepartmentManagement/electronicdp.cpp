#include "electronicdp.h"
#include "ui_electronicdp.h"


ElectronicDP::ElectronicDP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ElectronicDP)
{
    ui->setupUi(this);
}

ElectronicDP::~ElectronicDP()
{
    delete ui;
}

void ElectronicDP::on_ElectronicSavePB_clicked()
{
    QString name=ui->ElectronicLE->text();
    ui->ElectronicLE->clear();
    if(name == "" )
    {
        QMessageBox::warning(this,"","Please Fill Name");
    }
    else {
        QMessageBox::information(this,"","Name Saved Sucessfully");
    }
    v.push_back(name);
    qDebug()<<"Electronic Department: "<<v;
    d->addPerson(v);
}

void ElectronicDP::on_ElectronicBackPB_clicked()
{
    eleback=new MainWindow(this);
    eleback->show();
    hide();
}

void ElectronicDP::on_ElectronicPB_clicked()
{
    close();
}

