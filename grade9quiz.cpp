#include "grade9quiz.h"
#include "ui_grade9quiz.h"
#include "grade9.h"

Grade9Quiz::Grade9Quiz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Grade9Quiz)
{
    ui->setupUi(this);
//    ui->label->setText(g.question);
    int random = rand() %3;
    if (random == 0){
        QString qstr1 = QString::fromStdString(g.question);
        ui->label->setText(qstr1);
        QString qstr2 = QString::fromStdString(g.ranswer);
        ui->pushButton->setText(qstr2);
        QString qstr3 = QString::fromStdString(g.wanswer1);
        ui->pushButton_2->setText(qstr3);
        QString qstr4 = QString::fromStdString(g.wanswer2);
        ui->pushButton_3->setText(qstr4);
        QString qstr5 = QString::fromStdString(g.wanswer3);
        ui->pushButton_4->setText(qstr5);
    }
    if (random == 1){
        QString qstr1 = QString::fromStdString(g.question);
        ui->label->setText(qstr1);
        QString qstr2 = QString::fromStdString(g.wanswer1);
        ui->pushButton->setText(qstr2);
        QString qstr3 = QString::fromStdString(g.ranswer);
        ui->pushButton_2->setText(qstr3);
        QString qstr4 = QString::fromStdString(g.wanswer2);
        ui->pushButton_3->setText(qstr4);
        QString qstr5 = QString::fromStdString(g.wanswer3);
        ui->pushButton_4->setText(qstr5);
    }
    if (random == 2){
        QString qstr1 = QString::fromStdString(g.question);
        ui->label->setText(qstr1);
        QString qstr2 = QString::fromStdString(g.wanswer1);
        ui->pushButton->setText(qstr2);
        QString qstr3 = QString::fromStdString(g.wanswer2);
        ui->pushButton_2->setText(qstr3);
        QString qstr4 = QString::fromStdString(g.ranswer);
        ui->pushButton_3->setText(qstr4);
        QString qstr5 = QString::fromStdString(g.wanswer3);
        ui->pushButton_4->setText(qstr5);
    }
    if (random == 3){
        QString qstr1 = QString::fromStdString(g.question);
        ui->label->setText(qstr1);
        QString qstr2 = QString::fromStdString(g.wanswer1);
        ui->pushButton->setText(qstr2);
        QString qstr3 = QString::fromStdString(g.wanswer2);
        ui->pushButton_2->setText(qstr3);
        QString qstr4 = QString::fromStdString(g.wanswer3);
        ui->pushButton_3->setText(qstr4);
        QString qstr5 = QString::fromStdString(g.ranswer);
        ui->pushButton_4->setText(qstr5);
    }
//    QString qstr1 = QString::fromStdString(g.question);
//    ui->label->setText(qstr1);
//    QString qstr2 = QString::fromStdString(g.ranswer);
//    ui->pushButton->setText(qstr2);
//    QString qstr3 = QString::fromStdString(g.wanswer1);
//    ui->pushButton_2->setText(qstr3);
//    QString qstr4 = QString::fromStdString(g.wanswer1);
//    ui->pushButton_3->setText(qstr4);
//    QString qstr5 = QString::fromStdString(g.wanswer3);
//    ui->pushButton_4->setText(qstr5);
}

Grade9Quiz::~Grade9Quiz()
{
    delete ui;
}

//void Grade9Quiz::on_pushButton_clicked()
//{
//    grade9 u;
//    u.unit = 1;
//}


//void Grade9Quiz::on_pushButton_2_clicked()
//{
//    grade9 u;
//    u.unit = 2;
//}


//void Grade9Quiz::on_pushButton_3_clicked()
//{
//    grade9 u;
//    u.unit = 3;
//}


//void Grade9Quiz::on_pushButton_4_clicked()
//{
//    grade9 u;
//    u.unit = 4;
//}


void Grade9Quiz::on_pushButton_clicked()
{
    QString title;
    QString response;
    auto pushButton = qobject_cast<QPushButton *>(sender());
    Q_ASSERT(pushButton);
    if (ui->pushButton->text() == QString::fromStdString(g.ranswer)){
        title = "Correct";
        response = "You're out of this world!\nOn to the next question?";
    }
    else {
        title = "Incorrect";
        response = "Sorry the correctasnwer was " + QString::fromStdString(g.ranswer) + ".\nOn to the next question?";
    }
    QMessageBox::StandardButton answer = QMessageBox::question(this, title, response, QMessageBox:: Abort| QMessageBox::Yes);
    if (answer == QMessageBox::Abort){
        hide();
    }
    else{
        g.questionGenerator(1);
        hide();
        Grade9Quiz grade9quiz;
        grade9quiz.setModal(true);
        grade9quiz.exec();
    }
}


void Grade9Quiz::on_pushButton_2_clicked()
{
    QString title;
    QString response;
    auto pushButton = qobject_cast<QPushButton *>(sender());
    Q_ASSERT(pushButton);
    if (ui->pushButton->text() == QString::fromStdString(g.ranswer)){
        title = "Correct";
        response = "You're out of this world!\nOn to the next question?";
    }
    else {
        title = "Incorrect";
        response = "Sorry the correctasnwer was " + QString::fromStdString(g.ranswer) + ".\nOn to the next question?";
    }
    QMessageBox::StandardButton answer = QMessageBox::question(this, title, response, QMessageBox:: Abort| QMessageBox::Yes);
    if (answer == QMessageBox::Abort){
        hide();
    }
    else{
        g.questionGenerator(2);
        hide();
        Grade9Quiz grade9quiz;
        grade9quiz.setModal(true);
        grade9quiz.exec();
    }
}

void Grade9Quiz::on_pushButton_3_clicked()
{
    QString title;
    QString response;
    auto pushButton = qobject_cast<QPushButton *>(sender());
    Q_ASSERT(pushButton);
    if (ui->pushButton->text() == QString::fromStdString(g.ranswer)){
        title = "Correct";
        response = "You're out of this world!\nOn to the next question?";
    }
    else {
        title = "Incorrect";
        response = "Sorry the correctasnwer was " + QString::fromStdString(g.ranswer) + ".\nOn to the next question?";
    }
    QMessageBox::StandardButton answer = QMessageBox::question(this, title, response, QMessageBox:: Abort| QMessageBox::Yes);
    if (answer == QMessageBox::Abort){
        hide();
    }
    else{
        g.questionGenerator(2);
        hide();
        Grade9Quiz grade9quiz;
        grade9quiz.setModal(true);
        grade9quiz.exec();
    }
}


void Grade9Quiz::on_pushButton_4_clicked()
{
    QString title;
    QString response;
    auto pushButton = qobject_cast<QPushButton *>(sender());
    Q_ASSERT(pushButton);
    if (ui->pushButton->text() == QString::fromStdString(g.ranswer)){
        title = "Correct";
        response = "You're out of this world!\nOn to the next question?";
    }
    else {
        title = "Incorrect";
        response = "Sorry the correctasnwer was " + QString::fromStdString(g.ranswer) + ".\nOn to the next question?";
    }
    QMessageBox::StandardButton answer = QMessageBox::question(this, title, response, QMessageBox:: Abort| QMessageBox::Yes);
    if (answer == QMessageBox::Abort){
        hide();
    }
    else{
        g.questionGenerator(2);
        hide();
        Grade9Quiz grade9quiz;
        grade9quiz.setModal(true);
        grade9quiz.exec();
    }
}

