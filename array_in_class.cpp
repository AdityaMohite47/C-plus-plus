#include <iostream>
using namespace std;

class Shop
{
    int item_id[100];
    int item_price[100];
    int counter;
    char add;

public:
    void setcounter() { counter = 0; }
    void displayprice(void);
    void setprice(void);
};

void Shop ::setprice()
{
start:

    cout << "Enter the id of your item" << endl;
    cin >> item_id[counter];

    cout << "Enter theprice of your item" << endl;
    cin >> item_price[counter];

    counter++;
    cout << "Selected items are : " << counter << endl;

    cout << "Want to add item ? or see the list ? y or n" << endl;
    cin >> add;

    if (add == 'y')
    {
        goto start;
    }
    else
    {
        displayprice();
    }
}

void Shop ::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item with Id " << item_id[i] << " is " << item_price[i] << endl;
    }
}

int main()
{
    Shop Dmart;
    Dmart.setcounter();
    Dmart.setprice();
}