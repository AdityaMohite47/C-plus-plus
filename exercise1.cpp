#include <iostream>
using namespace std;

int main()
{
    int n;
    float kms, miles, inches, foot, cm, pounds, kgs, meters;

    cout << "Welcome to Unit converter....." << endl
         << endl
         << "Enter the input as per your requriements" << endl
         << " '1' for kms to miles " << endl
         << " '2' for inches to foot " << endl
         << " '3' for cm to inches " << endl
         << " '4' for pounds to kgs " << endl
         << " '5' for inches to meters " << endl
         << " '9' to quit the program" << endl;

    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Enter Kms" << endl;
        cin >> kms;

        cout << kms << " Kms are " << kms * 0.621371f << " miles " << endl;
        break;

    case 2:
        cout << "Enter inches" << endl;
        cin >> inches;

        cout << inches << " inches are " << inches * 0.833333f << " foot " << endl;
        break;

    case 3:
        cout << "Enter Cms" << endl;
        cin >> cm;

        cout << cm << " cms are " << cm * 0.393701f << " foot " << endl;
        break;

    case 4:
        cout << "Enter Pounds" << endl;
        cin >> pounds;

        cout << pounds << "  pounds  are " << pounds * 0.453592f << " Kgs " << endl;
        break;

    case 5:
        cout << "Enter inches" << endl;
        cin >> inches;

        cout << inches << " inches are " << inches * 0.0254f << " meters " << endl;
        break;

    case 9:
        cout << "Quitting the program...." << endl
             << "Thank You";

    default:
        break;
    }
}