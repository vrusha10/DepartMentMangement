#ifndef ITDP_H
#define ITDP_H

#include <QDialog>
#include "overviewpc.h"
#include "mainwindow.h"
#include "Dbase/db.h"
#include <QMessageBox>
#include <QVector>
#include <QDebug>

namespace Ui {
class ItDp;
}

class ItDp : public QDialog
{
    Q_OBJECT

public:
    explicit ItDp(QWidget *parent = nullptr);
    ~ItDp();

private slots:
    void on_pushButton_clicked();
    void on_ItBackPB_clicked();
    void on_ItSavePB_clicked();

private:
    Ui::ItDp *ui;
    QVector<QString>i;
     db *id;
     MainWindow *itback;
};

#endif // ITDP_H
