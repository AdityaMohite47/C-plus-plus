#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;

int i = 5;
class Shop
{
    int quantity[5];
    float price[5];
    float finalprice[5];
    string Customer;
    string Product[5];

public:
    void setname(string cus) { Customer = cus; }
    void printrecipt()
    {
        ofstream recipt("Recipt.txt");
        recipt << setw(30) << "D-Mart Purchase Recipt" << endl
               << endl
               << setw(5) << " Srno. " << setw(10) << " Items " << setw(20) << " Price " << setw(15) << " Quantity " << setw(15) << "Total_Price" << endl
               << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    }
    void showrecipt()
    {
        ifstream recipt("Recipt.txt");
        string content;
        while (recipt.eof() == 0)
        {
            getline(recipt, content);
            cout << content << endl;
        }
    }
};

int main()
{

    Shop Cus1;
    int quantity[5];
    float price[5];
    float finalprice[5];
    string name;
    string Product[5];
    string *Product = new string[i];
    cout << "Enter Your Name : " << endl;
    cin >> name;
    Cus1.setname(name);
    for (int j = 0; j < 5; j++)
    {
        cin >> Product[j] >> price[j] >> quantity[j] >> finalprice[j];
    }
}

// make a utiltiy functions to accept these values and then proceed to print the bill...
