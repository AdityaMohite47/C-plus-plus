// Ex : Student Class is the base class and 2 classes which are Test and Sports Are derived from Student class.
//         And an another class called Result is derived from Test and Sports classes respectively.

//               |----> Test ----_>|
// Student ----> |                 |---> Result
//               |----> Sports -- >|

//         But here this creates ambiguity as Student class is interited by 2 classes and an another class inherits
//         these classes. Here Student gets inherited 2 times so to resolve ambiguity, we use keyword 'virtual' while inheriting
//         classes from main base class.

//         Syntax :
//             class {{name}} : virtual {{mode}} {{mainbaseclass}}{

//             };

// You can code like this to and it is valid :
//             class {{name}} :  {{mode}} virtual {{mainbaseclass}}{

//              };

// virtual keyword ensures that that if a class is made virtual then they may get inherited only one time.

#include <iostream>
using namespace std;

class student
{
protected:
    int Rollno;

public:
    void setrollno(int a)
    {
        Rollno = a;
    }
    void printrollno()
    {
        cout << "Your Roll No is : " << Rollno << endl
             << endl;
    }
};

class Test : virtual public student
{
protected:
    float maths, physics;

public:
    void setmarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void printmarks()
    {
        cout << "Your Marks in Maths is : " << maths << endl
             << endl
             << "And Marks in Physics is : " << physics << endl
             << endl;
    }
};

class Sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float sc)
    {
        score = sc;
    }
    void printscore()
    {
        cout << "Your Overall Score In Sports is : " << score << endl
             << endl;
    }
};

class Result : public Test, public Sports
{

public:
    void Grade()
    {
        cout << "YOur Total Marks are : " << maths + physics + score << " Out of 250" << endl
             << endl;
    }
};

int main()
{
    Result Aditya;
    Aditya.setrollno(30);
    Aditya.printrollno();
    Aditya.setmarks(91, 94);
    Aditya.printmarks();
    Aditya.setscore(50);
    Aditya.printscore();
    Aditya.Grade();
}

 