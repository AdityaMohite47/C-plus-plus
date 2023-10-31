#include <iostream>
using namespace std;

class employee
{
private: // the functions inside private only can access the variables inside private...
    int a, b, c; 

public: // the functions are callable from outside... 
    int d, e; // if not specified as public then members of the class are by default private.
    void setdata(int a, int b, int c); // just decleration not implementation
    void getdata()                     // implementation inside class...
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void employee ::setdata(int a1, int b1, int c1) // implementaion outside the class
{
    a = a1;
    b = b1;
    c = c1;
}

// Nesting of member functions

class binary //by default the members and methods of class are public ... 
{
    string s;// this is private by default ...

public:
    void read(void);
    void check(void);
    void complimentof(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::complimentof(void)
{
    check();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{

    cout << endl
         << "Displaying your binary no." << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    // employee Aditya; // declaring object
    // Aditya.d = 69;
    // Aditya.e = 39;
    // Aditya.setdata(1, 2, 3); // calling function in class by object...
    // Aditya.getdata();

    binary b;
    b.read();
    //b.check(); you can call this in b.complimentof() too ...
    b.complimentof();
    b.display();
    b.complimentof();
    b.display();
}

// why oops not struct ?
//  struct can be accessed form any where in program so data is not safe...
//  function can't be applied in struct...

// if security is not concern then we use struct else class...