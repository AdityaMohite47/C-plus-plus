#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Shop
{
    int quantity;
    float price, finalprice;
    string Customer, Product;

public:
    void setdata(string cus, string prod, float p, int q)
    {
        Customer = cus;
        Product = prod;
        price = p;
        quantity = q;
        finalprice = p * q;
        cout << "Generating Recipt ..." << endl
             << endl;
        printrecipt();
    }
    void printrecipt()
    {
        ofstream recipt("Recipt.txt");
        recipt << " \t  \t  \t D-Mart Purchase Recipt \t  \t  \t" << endl
               << "| Sr.no |   Product   |  Price  |  Quantity  | Total Price |" << endl
               << "| 1.    | " << Product << " |  " << price << " |  " << quantity << " |  " << finalprice << " |" << endl
               << "| Sum   | " << finalprice << "                                                  |" << endl
               << " __________________________________________________________ " << endl
               << "   Thank You  " << Customer << " for choosing us as your trusted Purchasing Outlet..." << endl
               << " Here is Your Recipt for the Purchase of the following Purchases";
    }
};

int main()
{
    string customer = "Aditya Mohite";
    string product = "Colgate Toothpaste";

    Shop Customer1;
    Customer1.setdata(customer, product, 77.4, 1);
}