#ifndef MECHANICALVIEW_H
#define MECHANICALVIEW_H

#include <QDialog>
#include "mechanicaldp.h"
#include "Dbase/db.h"

namespace Ui {
class MechanicalView;
}

class MechanicalView : public QDialog
{
    Q_OBJECT

public:
    explicit MechanicalView(QWidget *parent = nullptr);
    ~MechanicalView();
    void showMechanical();

private slots:
    void on_MechanicalViewClose_clicked();

private:
    Ui::MechanicalView *ui;
    db *dm;
};

#endif // MECHANICALVIEW_H
