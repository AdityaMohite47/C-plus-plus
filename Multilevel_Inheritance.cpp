#include <iostream>
using namespace std;

class Student
{
protected:
    int rollno;

public:
    Student() {}
    void set_roll_no(int a)
    {
        rollno = a;
    }
    void get_roll_no()
    {
        cout << "The Roll no. is " << rollno << endl;
    }
};

class Exam : public Student
{
protected:
    float maths, physics;

public:
    void setmarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void getmarks()
    {
        cout << "The Marks obtained in physics is " << physics
             << endl
             << "And Marks obtained in Maths is " << maths
             << endl;
    }
};

class Result : public Exam
{
public:
    void display()
    {
        get_roll_no();
        getmarks();
        cout << "Your Percentage is : " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result Aditya;
    Aditya.set_roll_no(30);
    Aditya.setmarks(89, 90);
    Aditya.display();
}

// Insights :
//         1. if we are inheriting B class form A and C class from B [ A ---> B ---> C ]
//             A] A is the base class for B and B is base class for C.
//             B] A ---> B ---> C is the inheritance path or in simple words inheritance flow.