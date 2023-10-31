#include <iostream>
using namespace std;

class BASE
{
    int data; // private and is not inheritable

public:
    int data2;
    void setdata();
    int getdata();
    int getdata2();
};

// class DERIVED : public BASE // A CLASS BEIGN DERIVED PUBLICALLY
// {
//     int data3;

// public:
//     void process();
//     void display();
// };

class DERIVED : private BASE // A CLASS BEIGN DERIVED PRIVATELY
{
    int data3;

public:
    void process();
    void display();
};

void BASE::setdata()
{
    data = 10;
    data2 = 20;
}

int BASE::getdata()
{
    return data;
}

int BASE::getdata2()
{
    return data2;
}

void DERIVED::process()
{
    setdata();
    data3 = data2 * getdata();
}

void DERIVED ::display()
{
    cout << "Value of Data is " << getdata() << endl;
    cout << "Value of Data2 is " << data2 << endl;
    cout << "Value of Data3 is " << data3 << endl;
}
int main()
{
    DERIVED A;
    A.process();
    A.display();
}

// INSIGHTS : WHEN WE DERIVE A CLASS PUBLICALLY THE PUBLIC METHODS OF THE BASE CLASS BECOME PUBLIC METHODS OF THE 
//             DERIVED CLASS AND WHEN WE DERIVE PRIVATELY THE PUBLIC METHODS OF THE BASE CLASS BECOME PRIVATE METHODS
//             OF THE DERIVED CLASS...