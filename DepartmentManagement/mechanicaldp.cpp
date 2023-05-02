#include "mechanicaldp.h"
#include "ui_mechanicaldp.h"

MechanicalDP::MechanicalDP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MechanicalDP)
{
    ui->setupUi(this);
}

MechanicalDP::~MechanicalDP()
{
    delete ui;
}

void MechanicalDP::on_MechanicalPB_clicked()
{
    close();
}

void MechanicalDP::on_MechanicalBackPB_clicked()
{
    mecBack=new MainWindow(this);
    mecBack->show();
    hide();
}

void MechanicalDP::on_MechanicalSavePB_clicked()
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
    m.push_back(name);
    qDebug()<<"Mechanical Department: "<<m;
    md->addMechanicalPerson(m);
}

