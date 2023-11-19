#include <iostream>
using namespace std;

// Syntax for class with multiple parameters :

// template <class T1 , class T2 , .....class Tn>

// int main(){
// class-name <datatype1,datatype2> object ;
//}

template <class T1, class T2>

class Myclass
{
public:
    T1 data1;
    T2 data2;

    Myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1
             << "*"
             << this->data2 << " = " << data1 * data2;
    }
};

int main()
{
    Myclass<int, float> obj(2, 744.5);
    obj.display();
}