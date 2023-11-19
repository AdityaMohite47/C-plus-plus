// #include <iostream>
// using namespace std;

// template <class t1 = int , class t2 = float >

// float average(t2 a, t2 b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// int main()
// {
//  float a = average( 5 , 2);
//   cout << a << endl ;
// }

#include <iostream>
using namespace std;
template <class t = int>

void swapp(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 7;
    swapp(x, y);
    cout << x << endl
         << y << endl;
}
