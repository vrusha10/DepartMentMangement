#include "itdp.h"
#include "ui_itdp.h"

ItDp::ItDp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItDp)
{
    ui->setupUi(this);
}

ItDp::~ItDp()
{
    delete ui;
}

void ItDp::on_pushButton_clicked()
{
    close();
}

void ItDp::on_ItBackPB_clicked()
{
   itback=new MainWindow(this);
   itback->show();
   hide();
}

void ItDp::on_ItSavePB_clicked()
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
    i.push_back(name);
    qDebug()<<"IT Department: "<<i;
    id->addITPerson(i);
}

