#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <iterator>
#include <iomanip>
using namespace std;
class Shop
{
protected:
    vector<string> product;
    vector<int> quantity;
    vector<float> price, finalprice;

public:
    void setdata(vector<string> &p, vector<float> &cost, vector<int> &q)
    {
        for (int i = 0; i < 5; i++)
        {
            product.push_back(p[i]);
            price.push_back(cost[i]);
            quantity.push_back(q[i]);
            finalprice.push_back(cost[i] * q[i]);
        }
    }
    void makerecipt()
    {
        fstream write;
        write.open("Recipt.txt");
        write << " Payment recipt" << endl
              << "Product" << setw(30) << "Price" << setw(30) << "Quantity" << setw(30) << "Total_Price" << endl
              << endl;
        vector<string>::iterator s;
        vector<float>::iterator p;
        vector<int>::iterator q;
        vector<float>::iterator fp;
        int i = 0;
        for (s = product.begin(); s != product.end(); ++s)
        {
            write << *s << "  " << setw(30);
            for (p = price.begin(); p != price.end();)
            {
                write << *(p + i) << "  " << setw(30);
                for (q = quantity.begin(); q != quantity.end();)
                {
                    write << *(q + i) << "  " << setw(30);
                    for (fp = finalprice.begin(); fp != finalprice.end();)
                    {
                        write << *(fp + i) << endl;
                        break;
                    }
                    break;
                }
                break;
            }
            i++;
            if (i == 5)
            {
                break;
            }
        }
    }
};

int main()
{

    int quantity;
    string product;
    float price;

    vector<int> q;
    vector<string> p;
    vector<float> c;

    for (int i = 0; i < 5; i++)
    {
        cin >> product >> price >> quantity;
        p.push_back(product);
        c.push_back(price);
        q.push_back(quantity);
    }

    Shop Customer;
    Customer.setdata(p, c, q);
    Customer.makerecipt();
}