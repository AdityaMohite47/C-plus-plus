#include <iostream>
using namespace std;

void starpattern(int num, int rows)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void revstarpattern(int num, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int a, rows;
Start:
    cout << "Which Star Pattern do you want to print ?" << endl
         << "1 for normal star pattern and 2 for rev. star pattern" << endl;
    cin >> a;
    cout << "How many rows do you want to print.." << endl;
    cin >> rows;

    if (a == 1)
    {
        starpattern(a, rows);
    }
    else if (a == 2)
    {
        revstarpattern(a, rows);
    }
    else
    {
        cout << "Invalid Instruction" << endl;
        goto Start;
    }
}