#include "civild.h"
#include "ui_civild.h"

CivilD::CivilD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CivilD)
{
    ui->setupUi(this);
}

CivilD::~CivilD()
{
    delete ui;
}
