#ifndef CIVILD_H
#define CIVILD_H

#include <QDialog>

namespace Ui {
class CivilD;
}

class CivilD : public QDialog
{
    Q_OBJECT

public:
    explicit CivilD(QWidget *parent = nullptr);
    ~CivilD();

private:
    Ui::CivilD *ui;
};

#endif // CIVILD_H
