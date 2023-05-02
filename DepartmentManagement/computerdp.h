#ifndef COMPUTERDP_H
#define COMPUTERDP_H

#include <QDialog>

namespace Ui {
class ComputerDP;
}

class ComputerDP : public QDialog
{
    Q_OBJECT

public:
    explicit ComputerDP(QWidget *parent = nullptr);
    ~ComputerDP();

private slots:
    void on_ComputerBackPB_clicked();

    void on_ComputerPB_clicked();

private:
    Ui::ComputerDP *ui;
};

#endif // COMPUTERDP_H
