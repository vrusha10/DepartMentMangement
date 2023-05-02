#ifndef ELECTRICALVIEW_H
#define ELECTRICALVIEW_H

#include <QDialog>
#include "electricaldp.h"
#include "Dbase/db.h"

namespace Ui {
class ElectricalView;
}

class ElectricalView : public QDialog
{
    Q_OBJECT

public:
    explicit ElectricalView(QWidget *parent = nullptr);
    ~ElectricalView();
    void showElectrical();

private slots:
    void on_ElectricalViewClose_clicked();

private:
    Ui::ElectricalView *ui;
    db *ve;
};

#endif // ELECTRICALVIEW_H
