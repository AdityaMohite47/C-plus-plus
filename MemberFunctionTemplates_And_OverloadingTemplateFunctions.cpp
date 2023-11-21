#include <iostream>
using namespace std;

template <class T>
class Aditya
{
public:
    T data;
    Aditya(T d)
    {
        data = d;
    }
    void display();
};

template <class T> // a member function template...
void Aditya<T>::display()
{
    cout << data << endl;
}

void Fun(int a)
{
    cout << "I am the first fun()" << endl
         << a << endl;
}

template <class T> // making same function with a template i.e overloading function
void Fun(T a)
{
    cout << "This is a templatetized function" << endl
         << a << endl;
}

int main()
{
    // Aditya<float> A(6.9);
    // A.display();

    Fun(69);
    // this will invoke the function with int datatype... Exact match takes the highest priority for invoking the function

    Fun("C");
    // other than int datatype
    // this will invoke the templatiazed function and that function will adapt with the datatype provided since it is made
    //  using template
}