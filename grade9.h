#ifndef GRADE9_H
#define GRADE9_H

#include <string>
#include <cmath>
using namespace std;


class grade9
{
public:
    grade9();
    int unit;
    string question;
    string ranswer;
    string wanswer1;
    string wanswer2;
    string wanswer3;
    //Equation of a line
    void u1q1();
    void u1q2();
    void u1q3();
    // Exponents
    void u2q1();
    void u2q2();
    void u2q3();
    // Surface Area
    void u3q1();
    void u3q2();
    void u3q3();
    // Volume
    void u4q1();
    void u4q2();
    void u4q3();

    void questionGenerator(int unit);

public:
    int Rand (int max, int min);
};



#endif // GRADE9_H
