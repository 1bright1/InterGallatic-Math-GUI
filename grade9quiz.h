#ifndef GRADE9QUIZ_H
#define GRADE9QUIZ_H

#include <QDialog>

#include <string>
#include "grade9.h"
#include <QMessageBox>
using namespace std;

namespace Ui {
class Grade9Quiz;
}

class Grade9Quiz : public QDialog
{
    Q_OBJECT

public:
    explicit Grade9Quiz(QWidget *parent = nullptr);
    grade9 g;
    ~Grade9Quiz();

private slots:
//    void on_pushButton_clicked();

//    void on_pushButton_2_clicked();

//    void on_pushButton_3_clicked();

//    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Grade9Quiz *ui;
};

#endif // GRADE9QUIZ_H
