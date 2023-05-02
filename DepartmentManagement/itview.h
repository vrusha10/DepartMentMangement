#ifndef ITVIEW_H
#define ITVIEW_H

#include <QDialog>
#include "itdp.h"
#include "Dbase/db.h"

namespace Ui {
class ItView;
}

class ItView : public QDialog
{
    Q_OBJECT

public:
    explicit ItView(QWidget *parent = nullptr);
    ~ItView();
    void showIT();

private slots:
    void on_ItViewClose_clicked();
private:
    Ui::ItView *ui;
    db *di;
};

#endif // ITVIEW_H
