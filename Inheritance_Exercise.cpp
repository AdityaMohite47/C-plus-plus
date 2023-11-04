// Create 2 classes :
//         1. simple calculator : this calculator perfroms simple operations like : + , - , * , /
//         and displays the output.

//         2. scientific claculator : this calculator performs simple operations and 5 scientific operations
//         like : squareroot , sin(n) , cos(n) , tan(n) , square .

// Now create another class as hybrid calculator by inheriting simple and scientific classes of calculator
// which performs both simple and scientific operations together.

#include <iostream>
#include <cmath>
using namespace std;

class simpleCalculator
{
public:
    int num1, num2;
    char operation;

    simpleCalculator() {}
    simpleCalculator(int a, char b, int c)
    {
        num1 = a;
        num2 = c;
        operation = b;
        calculator();
    }
    int calculator();

    friend simpleCalculator calculator();
};

int simpleCalculator::calculator()
{

    if (operation == '+')
    {
        cout << num1 << operation << num2 << " = " << num1 + num2;
    }
    else if (operation == '-')
    {
        cout << num1 << operation << num2 << " = " << num1 - num2;
    }
    else if (operation == '*')
    {
        cout << num1 << operation << num2 << " = " << num1 * num2;
    }
    else if (operation == '/')
    {
        cout << num1 << operation << num2 << " = " << num1 / num2;
    }
}

class scientificCalculator
{
public:
    int num1, num2;
    char operation;

    scientificCalculator() {}
    scientificCalculator(int a, char b, int c)
    {

        num1 = a;
        num2 = c;
        operation = b;
        scicalculator1();
    }
    scientificCalculator(char a, int b)
    {
        num1 = b;
        operation = a;
        scicalculator2();
    }
    int scicalculator1();
    int scicalculator2();
};

int scientificCalculator::scicalculator1()
{
    if (operation == '+')
    {
        cout << num1 << operation << num2 << " = " << num1 + num2;
    }
    else if (operation == '-')
    {
        cout << num1 << operation << num2 << " = " << num1 - num2;
    }
    else if (operation == '*')
    {
        cout << num1 << operation << num2 << " = " << num1 * num2;
    }
    else if (operation == '/')
    {
        cout << num1 << operation << num2 << " = " << num1 / num2;
    }
}

int scientificCalculator::scicalculator2()
{
    if (operation == 's')
    {
        cout << "Sin(" << num1 << ")"
             << " = " << sin(num1);
    }
    else if (operation == 'c')
    {
        cout << "Cos(" << num1 << ")"
             << " = " << cos(num1);
    }
    else if (operation == 't')
    {
        cout << "Tan(" << num1 << ")"
             << " = " << tan(num1);
    }
    else if (operation == 'r')
    {
        cout << "Sqroot(" << num1 << ")"
             << " = " << sqrt(num1);
    }
    else if (operation == 'q')
    {
        cout << "Square(" << num1 << ")"
             << " = " << pow(num1, 2);
    }
}

class hybridCalculator : public simpleCalculator, public scientificCalculator
{
public:
    int choose;
    int ChooseCalculator(int);
    hybridCalculator(int a)
    {
        choose = a;
        ChooseCalculator(choose);
    }
};

int hybridCalculator::ChooseCalculator(int a)
{

    if (a == 1)
    {
        simpleCalculator(12, '*', 12);
    }

    if (a == 2)
    {
        scientificCalculator('s', 90);
    }
}

int main()
{
    hybridCalculator User(2);
}