#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Dbase/db.h"




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ElectronicPB_clicked();
    void on_MainWindowClosePB_clicked();
    void on_ElectricalPB_clicked();
    void on_ITPB_clicked();
    void on_MechanicalPB_clicked();
    void on_CivilDP_clicked();
    void on_OverViewPB_clicked();

private:
    Ui::MainWindow *ui;
    db *d;
};
#endif // MAINWINDOW_H
