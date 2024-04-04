#include "home.h"
#include "ui_home.h"
#include "grade9.h"
#include "grade9quiz.h"

Home::Home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    this->setFixedSize(750,500);
}

Home::~Home()
{
    delete ui;
}

//void Home::on_unit1button_clicked()
//{
//    unit = 1;
//    g.questionGenerator(unit);

//    hide();
//    Grade9Quiz grade9quiz;
//    grade9quiz.setModal(true);
//    grade9quiz.exec();
//}


//void Home::on_unit2button_clicked()
//{
//    unit = 2;
//    g.questionGenerator(unit);

//    hide();
//    Grade9Quiz grade9quiz;
//    grade9quiz.setModal(true);
//    grade9quiz.exec();
//}


//void Home::on_unit3button_clicked()
//{
//    unit = 3;
//    g.questionGenerator(unit);

//    hide();
//    Grade9Quiz grade9quiz;
//    grade9quiz.setModal(true);
//    grade9quiz.exec();
//}


//void Home::on_unit4button_clicked()
//{
//    unit = 4;
//    g.questionGenerator(unit);

//    hide();
//    Grade9Quiz grade9quiz;
//    grade9quiz.setModal(true);
//    grade9quiz.exec();
//}


void Home::on_unit1button_clicked()
{
    grade9 *u;
    grade9 g9;
    u = &g9;
//    int tunit;
//    tunit = 1;
    u->unit = 1;
    u->questionGenerator(1);
    Grade9Quiz grade9quiz;
    grade9quiz.setModal(true);
    grade9quiz.exec();
}


void Home::on_unit2button_clicked()
{
    grade9 *u;
    grade9 g9;
    u = &g9;
    u->unit = 2;
//    tunit = 2;
    u->questionGenerator(2);
    Grade9Quiz grade9quiz;
    grade9quiz.setModal(true);
    grade9quiz.exec();
}


void Home::on_unit3button_clicked()
{
    grade9 *u;
    grade9 g9;
    u = &g9;
    u->unit = 3;
//    tunit = 3;
//    u->questionGenerator(3);
    Grade9Quiz grade9quiz;
    grade9quiz.setModal(true);
    grade9quiz.exec();
}


void Home::on_unit4button_clicked()
{
    grade9 *u;
    grade9 g9;
    u = &g9;
    u->unit = 4;
//    tunit = 4;
    //u->questionGenerator(4);
    Grade9Quiz grade9quiz;
    grade9quiz.setModal(true);
    grade9quiz.exec();
}

