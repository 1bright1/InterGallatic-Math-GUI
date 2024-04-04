#ifndef HOME_H
#define HOME_H

#include <QDialog>
#include "user.h"

#include <string>
#include "grade9.h"
using namespace std;

namespace Ui {
class Home;
}

class Home : public QDialog
{
    Q_OBJECT

public:
//    int tunit;
    explicit Home(QWidget *parent = nullptr);
    //grade9 g;
    ~Home();

private slots:

    void on_unit1button_clicked();

    void on_unit2button_clicked();

    void on_unit3button_clicked();

    void on_unit4button_clicked();

private:
    Ui::Home *ui;
};

#endif // HOME_H
