#include <iostream>
using namespace std;
class c2;
class c1
{
    int value1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        value1 = a;
    }
    void display()
    {
        cout << value1 << endl;
    }
};

class c2
{
    int value2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        value2 = a;
    }
    void display()
    {
        cout << value2 << endl;
    }
};
// swapping logic
// temp = a;
// a = b ;
// b = temp ;

void exchange(c1 &x, c2 &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(66);

    exchange(oc1, oc2);

    cout << "The value after exchanging becomes " << endl << oc1.display() << endl << oc2.display();
 
}