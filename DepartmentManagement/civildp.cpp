#include "civildp.h"
#include "ui_civildp.h"

CivilDP::CivilDP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CivilDP)
{
    ui->setupUi(this);
}

CivilDP::~CivilDP()
{
    delete ui;
}

void CivilDP::on_CivilPB_clicked()
{
    close();
}

void CivilDP::on_CivilBackPB_clicked()
{
    cback=new MainWindow(this);
    cback->show();
    hide();
}

void CivilDP::on_CivilSavePB_clicked()
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
    c.push_back(name);
    qDebug()<<"Civil Department: "<<c;
    d->addCivilPerson(c);
}

