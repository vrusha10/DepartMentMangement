#ifndef CIVILVIEW_H
#define CIVILVIEW_H

#include <QDialog>
#include "civildp.h"
#include "Dbase/db.h"
#include "overviewpc.h"

namespace Ui {
class CivilView;
}

class CivilView : public QDialog
{
    Q_OBJECT

public:
    explicit CivilView(QWidget *parent = nullptr);
    ~CivilView();
    void showCivil();

private slots:
    void on_CivilViewClose_clicked();

private:
    Ui::CivilView *ui;
    db *ed;
};

#endif // CIVILVIEW_H
