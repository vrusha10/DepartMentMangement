#include "computerdp.h"
#include "ui_computerdp.h"
#include "mainwindow.h"

MainWindow *comback;

ComputerDP::ComputerDP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComputerDP)
{
    ui->setupUi(this);
}

ComputerDP::~ComputerDP()
{
    delete ui;
}

void ComputerDP::on_ComputerBackPB_clicked()
{
    comback=new MainWindow(this);
    comback->show();
//    hide();
}


void ComputerDP::on_ComputerPB_clicked()
{
    close();
}
