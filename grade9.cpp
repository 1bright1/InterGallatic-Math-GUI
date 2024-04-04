#include "grade9.h"
#include "home.h"

grade9::grade9()
{
//    Home h;
//    unit = h.tunit;
//    //QPushButton btn;
//    if (unit == 1){
//       questionGenerator(1);
//    }
//    else if(unit == 2){
//        questionGenerator(2);
//    }
//    else if(unit == 3){
//        questionGenerator(3);
//    }
//    else{
//        questionGenerator(4);
//    }
    questionGenerator(unit);
    srand (time(NULL));
}

int grade9::Rand (int min, int max) {
    int RandSelect;

    /* initialize random seed: */
//    srand (time(NULL));

    /* generate  number between 1 and 10: */
    RandSelect = rand() % max + min;
    return RandSelect;
}

void grade9 :: u1q1(){ //getlineQ1
    //Random generate three numbers
    int n1 = Rand(1,10);
    int n2 = Rand(1,10);
    int n3 = Rand(1,10);
    //use input formula
    ranswer = to_string(n3) + "x + " + to_string(n3*n2 +n1);
    wanswer1 = to_string(n3) + "x + " + to_string(n3*n2);
    wanswer2 = to_string(n2) + "x + " + to_string(n1);
    wanswer3 = to_string(n3) + "x + " + to_string(n1);
    question = "The line has the y intercept " + to_string(n1)+ ", the x intercept " + to_string(n2) +" and a slope of " + to_string(n3);


};

// Question Will be formatted like "Given the line __x + ___" what is the y intercept
void grade9:: u1q2(){  //getlineQ2
    // 2 random number nessesary for question
    int n1 = Rand(1, 10);
    int n2 = Rand(1, 10);
    // set equation to zero to solve
    ranswer = "y = " + to_string(n2);
    wanswer1= "y = " + to_string(n1);
    wanswer2= "y = " + to_string(n1/n2);
    wanswer3= "y = " + to_string(n2/n1);
    question = "Given the line " + to_string(n1)+ "x + " + to_string(n2) +" what is the y intercept?";


};
// Question Will be formatted like "Given the line __x + ___" what is the x intercept
void grade9:: u1q3(){ //lineq3
    // 2 random number nessesary for question
    int n1 = Rand(1, 10);
    int n2 = Rand(1, 10);
    //set y to zero lol
    ranswer = "x = " + to_string(-n2/n1);
    wanswer1= "x = " + to_string(n1);
    wanswer2= "x = " + to_string(-n1);
    wanswer3= "x = " + to_string(-n1/n2);
    question = "Given the line " + to_string(n1)+ "x + " + to_string(n2) +" what is the x intercept?";

};

// Simplify three part exponential equation "x^__ +x^ ___+___x^___"
void grade9:: u2q1(){ //exponent1
    // random generate three numbers one for coeff two for exponents
    int coeff1 = Rand(1,10);
    int ex2 = Rand(1,10);
    int ex1 = Rand(1,10);
    //"x^A +x^B+Cx^A" = "(C+1)x^A + x^B
    ranswer = to_string(coeff1+1) +"x^" +to_string(ex1)+ " + x^" +to_string(ex2);
    wanswer1 = to_string(coeff1) +"x^" +to_string(ex1)+ " + x^" +to_string(ex2);
    wanswer2 = to_string(coeff1+1) +"x^" +to_string(ex2)+ " + x^" +to_string(ex1);
    wanswer3 = "x^" +to_string(ex1)+ " + x^" +to_string(ex2);
    question = "Simplify three part exponential equation: x^" + to_string(ex1)+ " + x^" + to_string(ex2) + "+ " + to_string(coeff1) +"x^" + to_string(ex1);

};

// Simplify exponential equation with multiplication rules "x^__(x^__) + x^__"
void grade9:: u2q2(){ //exponentQ2
    //random generate 4 numbers 2 for exponents 2 for coefficients
    int ex2 = Rand(1,10);
    int ex1 = Rand(1,10);
    //"x^A(x^B) + x^A+B" = "2x^A+B"
    ranswer = "2x^"+to_string(ex1+ex2);
    int x = ex1*ex2;
    wanswer1 = "x^"+ to_string(x) + " + x^" +to_string(ex1+ex2);
    wanswer2 = "x^"+to_string(pow(ex1,ex2)) + " + x^" +to_string(ex1+ex2);
    wanswer3 = "x^"+ to_string(ex1*ex2);
    question = "Simplify exponential equation with multiplication rules: x^" + to_string(ex1)+ "(x^" + to_string(ex2) + ") + x^" + to_string(ex1+ex2);

};

// Simplify exponential equaiton with division "(x^___)/(x^___) +x^___"
void grade9:: u2q3(){ //exponentQ3
    // I think the last term should be the exponent of the division good little trick
    int ex2 = Rand(1,10);
    int ex1 = Rand(1,10);
    //"(x^A)/(x^B) +x^A+B"
    if(ex1 < ex2){
        int a = abs(ex1-ex2);
        ranswer = "1/(x^" + to_string(a) +") + x^" + to_string(ex1+ex2);
        wanswer1 = "x^" + to_string(a) +"+ x^" + to_string(ex1+ex2);

    }
    else{
        int a = abs(ex1-ex2);
        ranswer = "x^" + to_string(a) +"+ x^" + to_string(ex1+ex2);
        wanswer1 = "1/(x^" + to_string(a) +") + x^" + to_string(ex1+ex2);
    }
    wanswer2 = "x^" + to_string(ex1*ex2) +"+ x^" + to_string(ex1*ex2);
    wanswer3 = "1/(x^" + to_string(ex1*ex2) +") + x^" + to_string(ex1+ex2);
    question = "Simplify exponential equation with division rules: (x^" + to_string(ex1)+ ")/(x^" + to_string(ex2) + ") + x^" + to_string(ex1+ex2);


};

//sphere SA formula = 4 pi r^2
void grade9:: u3q1(){ //sphereSAQ1
    //random number for radius
    int r = Rand(1,10);
    int answer = 4*M_PI*pow(r,2);

    ranswer = to_string(answer);
    wanswer1 = to_string(2*M_PI*(2*r));
    wanswer2 = to_string(2*r);
    wanswer3 = to_string(answer+1);
    question = "What is the surface area of a sphere with radius " + to_string(r);

};

// cube SA  formula = 6 a^2
void grade9:: u3q2(){ //cubeSAQ2
    // random number generate side length a
    int a = Rand(1,10);
    int answer = 6*pow(a,2);
    ranswer = to_string(answer);
    wanswer1 = to_string(pow(a,2));
    wanswer2 = to_string(4*a);
    wanswer3 = to_string(a*6);
    question = "What is the surface area of a cube with side length " + to_string(a);


};

// pyramid SA formula = A + (1/2)ps
// p is the perimeter of the base slant height s
void grade9:: u3q3(){ //pyramidSAQ3
    int A = Rand(1,10);
    int p = Rand(1,10);
    int s = Rand(1,10);

    int answer = A +(0.5)*p*s;
    ranswer = to_string(answer);
    wanswer1 = to_string((0.5)*p*s);
    wanswer2 = to_string(A+p+s);
    wanswer3 = to_string(A*p*s);
    question = "What is the surface area of a pyramid with a perimeter of " + to_string(p) + " a slant height of " + to_string(s) + "and a base area of" + to_string(A);

};


//sphere vol formula = (4/3) pi r^3
void grade9:: u4q1(){ //spherevolQ1
    int r = Rand(1,10);
    //int answer = (4/3)*M_PI*pow(r,3);
    float answer = (4*3.14*r*r*r)/3;
    ranswer = to_string(answer);
    wanswer1 = to_string(M_PI*pow(r,3));
    wanswer2 = to_string(pow(r,3));
    wanswer3 = to_string(answer+1);
    question = "What is the volume of a sphere with radius " + to_string(r);

};

//cube vol formula = a^3
void grade9:: u4q2(){ //cubevolQ2
    int a = Rand(1,10);
    int answer = pow(a,3);
    ranswer = to_string(answer);
    wanswer1 = to_string(6*pow(a,3));
    wanswer2 = to_string(6*pow(a,2));
    wanswer3 = to_string(a*a);
    question = "What is the volume of a cube with side length " + to_string(a);


};

//pyramid vol formula = l*w*h/3
void grade9:: u4q3(){ //pyramidvolQ3
    int l = Rand(1,10);
    int w = Rand(1,10);
    int h = Rand(1,10);
    float answer = (l*w*h)/3;
    ranswer = to_string(answer);
    wanswer1 = to_string(l*w*h);
    wanswer2 = to_string(l*w*h/2);
    wanswer3 = to_string(answer+1);
    question = "What is the volume of a pyramid with length " + to_string(l) + " and width " + to_string(w) + " and height " + to_string(h);


};

void grade9::questionGenerator(int unit){
    if(unit == 1) {
        int QuestionType = Rand(1, 3);
        switch (QuestionType) {
            case 1:
                u1q1(); // this sets the pointer to the first element to temp
                break;
            case 2:
                u1q2();
                break;
            case 3:
                u1q3();
                break;

        }
    }
    else if(unit == 2){
        int QuestionType = Rand(1, 3);
        switch (QuestionType) {
            case 1:
                u2q1();
                break;
            case 2:
                u2q2();
                break;
            case 3:
                u2q3();
                break;

        }
    }
    else if (unit == 3){
        int QuestionType = Rand(1, 3);
        switch (QuestionType) {
            case 1:
                u3q1();
                break;
            case 2:
                u3q2();
                break;
            case 3:
                u3q3();
                break;

        }
    }
    else{
        int QuestionType = Rand(1, 3);
        switch (QuestionType) {
            case 1:
                u4q1();
                break;
            case 2:
                u4q2();
                break;
            case 3:
                u4q3();
                break;

        }
    }
}
