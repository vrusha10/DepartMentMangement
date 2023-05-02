#ifndef ELECTRONICVIEW_H
#define ELECTRONICVIEW_H

#include <QDialog>
#include "electronicdp.h"
#include "Dbase/db.h"

namespace Ui {
class ElectronicView;
}

class ElectronicView : public QDialog
{
    Q_OBJECT

public:
    explicit ElectronicView(QWidget *parent = nullptr);
    ~ElectronicView();
    void showElectronic();

private slots:
    void on_ElectronicViewClose_clicked();

private:
    Ui::ElectronicView *ui;
    db *dg;
};

#endif // ELECTRONICVIEW_H
