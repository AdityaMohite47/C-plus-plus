#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int matirx1[2][2] = {{}, {}};
    int matirx2[2][2] = {{}, {}};

    cout << "Enter the values for matrix 1" << endl;
    cin >> matirx1[0][0] >> matirx1[1][0] >> matirx1[0][1] >> matirx1[1][1];

    cout << "Matrix 1 :" << endl;

    cout << matirx1[0][0] << "     " << matirx1[1][0] << endl
         << endl
         << matirx1[0][1] << "     " << matirx1[1][1] << endl;

    cout << "Enter the values for matrix 2" << endl;
    cin >> matirx2[0][0] >> matirx2[1][0] >> matirx2[0][1] >> matirx2[1][1];

    cout << "Matrix 2 :" << endl;

    cout << matirx2[0][0] << "     " << matirx2[1][0] << endl
         << endl
         << matirx2[0][1] << "     " << matirx2[1][1];

         
}
