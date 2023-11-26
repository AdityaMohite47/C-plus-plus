#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <ctime>

class Transaction
{
protected:
    std::vector<int> TransactionID;
    std::vector<std::string> Description;
    std::vector<time_t> Date;
    std::vector<float> amount;
    float balance = 100;

public:
    void setdata(const std::vector<int> &ID, const std::vector<std::string> &d, const std::vector<float> &amt, const std::vector<time_t> &D)
    {
        std::ofstream write("Transactions.txt");

        write << "Your Transaction History\n\n"
              << std::setw(14) << "Transaction ID" << std::setw(25) << "Date" << std::setw(40) << "Description" << std::setw(20) << "Amount" << std::setw(20) << "Balance\n"
              << std::setfill('-') << std::setw(130) << "-" << std::setfill(' ') << '\n';

        write.close();

        std::ofstream rewrite("Transactions.txt", std::ios::app);
        for (size_t i = 0; i < ID.size(); ++i)
        {
            // Format the date string without the newline character
            std::string formattedDate = ctime(&D[i]);
            formattedDate.erase(formattedDate.find('\n'));

            if (d[i] == "Credit")
            {
                balance += amt[i];
            }
            else if (d[i] == "Debit")
            {
                balance -= amt[i];
            }

            rewrite << std::setw(10) << ID[i]
                    << std::setw(40) << formattedDate
                    << std::setw(27) << d[i]
                    << std::setw(23) << std::fixed << std::setprecision(2) << amt[i]
                    << std::setw(20) << balance << '\n';
        }
        rewrite.close();
    }
};

class FinanceTracker : public Transaction
{
public:
    std::string content;

    void showstatement()
    {
        std::ifstream show("Transactions.txt");
        while (getline(show, content))
        {
            std::cout << content << '\n';
        }

        std::cout << '\n';
    }

    void showbalance()
    {

        for (size_t i = 0; i < Description.size(); ++i)
        {
            if (Description[i] == "Credit")
            {
                balance += amount[i]; // Update balance
            }
            else if (Description[i] == "Debit")
            {
                balance -= amount[i]; // Update balance
            }
        }
        std::cout << "Your Bank-Balance is : " << balance << '\n';
    }
};

int main()
{
    std::cout << "Transaction History Tracker\n\n";

    std::vector<int> TID;
    std::vector<std::string> Desct;
    std::vector<time_t> Date;
    std::vector<float> amnt;

    srand(time(NULL));

    while (true)
    {
        float amt;
        std::string Desc;
        time_t now = time(0);
        int ID = rand() % 10000;

        std::cout << "Your Transaction ID will be : " << ID << std::endl;

        std::cout << "Enter Your Transaction Details [Description , Amount]\n"
                  << '\n';
        std::cout << "Press 'done' to finish : \n";
        std::cin >> Desc;

        if (Desc == "done")
        {
            break;
        }
        else if (Desc == "credit" || Desc == "Credit")
        {
            Desct.push_back("Credit");
        }
        else if (Desc == "Debit" || Desc == "debit")
        {
            Desct.push_back("Debit");
        }

        std::cout << "Amount: ";
        std::cin >> amt;

        TID.push_back(ID);
        Date.push_back(now);
        amnt.push_back(amt);
    }

    std::cout << "Updating Your Account... \n"
              << '\n';

    FinanceTracker Person;
    Person.setdata(TID, Desct, amnt, Date);

    std::cout << '\n';

    int chk = 0;

here:
    std::cout << '\n';
    std::cout << "For checking Bank-Statement Press 1 \n For checking Bank-Balance Press 2" << '\n';
    std::cin >> chk;

    if (chk == 1)
    {
        Person.showstatement();
        goto here;
    }
    else if (chk == 2)
    {
        Person.showbalance();
        goto here;
    }
    else
    {
    }

    return 0;
}
