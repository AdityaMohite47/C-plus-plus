#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
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
        cout << "Recipt Generated" << endl
             << "Thank You" << endl;
    }
    void printrecipt()
    {
        ofstream recipt("Recipt.txt");
        recipt << setw(30) << "D-Mart Purchase Recipt" << endl
               << endl
               << setw(5) << " Srno. " << setw(10) << " Items " << setw(20) << " Price " << setw(15) << " Quantity " << setw(15) << "Total_Price" << endl
               << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";
    }
};

int main()
{
    string customer = "Aditya Mohite";
    string product = "Colgate Toothpaste";

    Shop Customer1;
    Customer1.setdata(customer, product, 77.4, 1);
}