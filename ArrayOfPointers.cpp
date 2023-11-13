#include <iostream>
using namespace std;

class shop_Item
{
    int itemid;
    float price;

public:
    void setdata(int a, float b)
    {
        itemid = a;
        price = b;
    }

    void getdata()
    {
        cout << "The ID of Item is : " << itemid << endl
             << "Price of The Item is : " << price << endl
             << endl;
    }
};
int main()
{
    int purchases = 3, p;
    float q;

    shop_Item *ptr = new shop_Item[sizeof(purchases)];

    for (int i = 0; i < purchases; i++)
    {

        cout << " Enter the Id of Item And Price for " << i + 1 << " : " << endl;
        cin >> p >> q;
        (ptr + i)->setdata(p, q);
    }

    for (int i = 0; i < purchases; i++)
    {
        cout << "Details of Item no " << i + 1 << " : " << endl;
        (ptr + i)->getdata();
    }
}