#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

class Shop
{
protected:
    vector<string> product;
    vector<int> quantity;
    vector<float> price, finalprice;

public:
    void setdata(const vector<string> &p, const vector<float> &cost, const vector<int> &q)
    {
        product = p;
        price = cost;
        quantity = q;

        // Calculate final prices
        for (size_t i = 0; i < product.size(); ++i)
        {
            finalprice.push_back(price[i] * quantity[i]);
        }
    }

    void makereceipt()
    {
        ofstream write("Receipt.txt");
        write << " Payment receipt" << endl
              << endl
              << setw(15) << "Product" << setw(15) << "Price" << setw(15) << "Quantity" << setw(15) << "Total Price" << endl
              << setfill('-') << setw(60) << "-" << setfill(' ') << endl;

        for (size_t i = 0; i < product.size(); ++i)
        {
            write << setw(15) << product[i]
                  << setw(15) << fixed << setprecision(2) << price[i]
                  //   << setw(15) << price[i]
                  << setw(15) << quantity[i]
                  << setw(15) << finalprice[i] << endl;
        }
    }
};

int main()
{
    vector<int> q;
    vector<string> p;
    vector<float> c;

    // cout << "Enter product details (name price quantity):" << endl;

    while (true)
    {
        string product;
        float price;
        int quantity;

        cout << "Enter product details (name price quantity), or type 'done' to finish: ";
        cin >> product;

        if (product == "done")
            break;

        cin >> price >> quantity;

        p.push_back(product);
        c.push_back(float(price));
        q.push_back(quantity);
    }

    Shop Customer;
    Customer.setdata(p, c, q);
    Customer.makereceipt();

    cout << "Receipt generated successfully." << endl;

    return 0;
}