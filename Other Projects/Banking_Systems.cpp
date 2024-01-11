#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <windows.h>

// Transaction class to manage and record financial transactions
class Transaction
{
protected:
    std::vector<int> TransactionID;       // Vector to store transaction IDs
    std::vector<std::string> Description; // Vector to store transaction descriptions (Credit/Debit)
    std::vector<time_t> Date;             // Vector to store transaction dates
    std::vector<float> amount;            // Vector to store transaction amounts
    float balance = 100;                  // Initial balance

    friend void comparingkeywords();

public:
    // Function to set transaction data and update transaction history
    void setdata(const std::vector<int> &ID, const std::vector<std::string> &d, const std::vector<float> &amt, const std::vector<time_t> &D);
};


// class SearchByFilter : protected Transaction
// {
// protected:
//     std::string sortedcontent;
//     std::string tobeskipped;

// public:
//     void searchbyDescription(std::string userdesc)
//     {
//         std::cout << "Your Transaction History\n\n"
//                   << std::setw(13) << "Transaction ID" << std::setw(25) << "Date" << std::setw(40) << "Description" << std::setw(20) << "Amount" << std::setw(20) << "Balance\n"
//                   << std::setfill('-') << std::setw(130) << "-" << std::setfill(' ') << '\n';
//         std::ifstream sort("Transactions.txt");
//         for (size_t i = 0; i < Description.size(); i++)
//         {
//             if (Description[i] == userdesc)
//             {
//                 size_t j = 0;
//                 while (getline(sort, sortedcontent))
//                 {
//                     if (j != 4)
//                     {
//                         getline(sort, tobeskipped);
//                     }
//                     else if (j >= 4)
//                     {
//                         size_t found = sortedcontent.find(Description[i]);
//                         if (found != std::string::npos)
//                         {
//                             std::cout << sortedcontent << std::endl;
//                         }
//                         else
//                         {
//                             tobeskipped = sortedcontent;
//                         }
//                     }

//                     j++;
//                     break;
//                 }
//             }
//         }
//     }
// };



// FinanceTracker class to provide additional functionalities on top of Transaction
class FinanceTracker : public Transaction
{
public:
    std::string content; // String to store transaction history content

    // Function to display the transaction history
    void showstatement();

    // Function to display the current balance
    void showbalance();
};

// LoginOrRegister class to manage user login or registration
class LoginOrRegister
{
    // Static vectors to store registered usernames and passwords
    static std::vector<int> Password;
    static std::vector<std::string> AccountHolderName;
    static std::vector<int> AccountNumber;

protected:
    std::string username;
    int pass1, pass2;

public:
    char choice; // Variable to store user choice

    // Function for user login
    void Login();

    // Function for user registration
    void Register();

    // Function to ask the user for login or registration
    void Ask();

    // Static function to check if a username is registered
    static bool IsUsernameRegistered(const std::string &username);

    // Static function to register a new username and password
    static void RegisterUsernameAndPassword(const std::string &username, int password);
};

// Initialize static vectors for storing registered usernames and passwords
std::vector<int> LoginOrRegister::Password;
std::vector<std::string> LoginOrRegister::AccountHolderName;

// Implementation of setdata function in Transaction class
void Transaction::setdata(const std::vector<int> &ID, const std::vector<std::string> &d, const std::vector<float> &amt, const std::vector<time_t> &D)
{
    // Write transaction history header to a file
    std::ofstream write("Transactions.txt");
    write << "Your Transaction History\n\n"
          << std::setw(13) << "Transaction ID" << std::setw(25) << "Date" << std::setw(40) << "Description" << std::setw(20) << "Amount" << std::setw(20) << "Balance\n"
          << std::setfill('-') << std::setw(130) << "-" << std::setfill(' ') << '\n';
    write.close();

    // Append transaction data to the file
    std::ofstream rewrite("Transactions.txt", std::ios::app);
    for (size_t i = 0; i < ID.size(); ++i)
    {
        // Format the date
        std::string formattedDate = ctime(&D[i]);
        formattedDate.erase(formattedDate.find('\n'));

        // Update balance based on transaction type (Credit/Debit)
        if (d[i] == "Credit")
        {
            balance += amt[i];
        }
        else if (d[i] == "Debit")
        {
            balance -= amt[i];
        }

        // Write transaction details to the file
        rewrite << std::setw(10) << ID[i]
                << std::setw(40) << formattedDate
                << std::setw(27) << d[i]
                << std::setw(23) << std::fixed << std::setprecision(2) << amt[i]
                << std::setw(20) << balance << '\n';
    }

    rewrite.close();
}

// Implementation of showstatement function in FinanceTracker class
void FinanceTracker::showstatement()
{
    // Read and display transaction history from the file
    std::ifstream show("Transactions.txt");
    while (getline(show, content))
    {
        std::cout << content << '\n';
    }

    std::cout << '\n';
}

// Implementation of showbalance function in FinanceTracker class
void FinanceTracker::showbalance()
{
    // Calculate and display the current balance
    for (size_t i = 0; i < Description.size(); ++i)
    {
        if (Description[i] == "Credit")
        {
            balance += amount[i];
        }
        else if (Description[i] == "Debit")
        {
            balance -= amount[i];
        }
    }
    std::cout << "Your Bank-Balance is: " << balance << '\n';
}

// Implementation of IsUsernameRegistered function in LoginOrRegister class
bool LoginOrRegister::IsUsernameRegistered(const std::string &username)
{
    // Check if the given username is registered
    for (const std::string &registeredUsername : AccountHolderName)
    {
        if (username == registeredUsername)
        {
            return true;
        }
    }
    return false;
}

// Implementation of RegisterUsernameAndPassword function in LoginOrRegister class
void LoginOrRegister::RegisterUsernameAndPassword(const std::string &username, int password)
{
    // Register a new username and password
    AccountHolderName.push_back(username);
    Password.push_back(password);
}

// Implementation of Login function in LoginOrRegister class
void LoginOrRegister::Login()
{
    std::cout << '\n'
              << '\n';
    std::cout << std::setw(60) << "Login Page" << '\n'
              << std::setfill('-') << std::setw(130) << "-" << std::setfill(' ') << '\n';
start:
    std::cout << "Enter Your UserName: ";
    std::cin >> username;

    std::cout << "Enter Your Password: ";
    std::cin >> pass1;

    std::cout << "Verifying Username and Password..." << std::endl
              << std::endl;

    Sleep(3000);

    // Check if the entered username exists
    if (!IsUsernameRegistered(username))
    {
        char a;
        std::cout << "UserName Not Found, Please Enter Correct UserName" << std::endl
                  << std::endl;
        std::cout << "Don't have account ??" << std::endl
                  << "Press R to register , Press any key to Try Login Again" << std::endl;
        std::cin >> a;
        if (a == 'r' || a == 'R')
        {
            Register();
        }
        else
        {
            Login();
        }
    }

    // Check if the entered password matches the username
    size_t index = 0;
    for (; index < AccountHolderName.size(); ++index)
    {
        if (username == AccountHolderName[index])
        {
            break;
        }
    }

    if (pass1 == Password[index])
    {
        std::cout << "All SET ..." << std::endl;
        std::cout << "Loading Your Data..." << std::endl;
        Sleep(3000);
    }
    else
    {
        std::cout << "Incorrect Password, Please Enter Correct Password" << std::endl
                  << std::endl;
        Login();
    }
}

// Implementation of Register function in LoginOrRegister class
void LoginOrRegister::Register()
{
    std::cout << '\n'
              << '\n';
    std::cout << std::setw(60) << "Register Page" << '\n'
              << std::setfill('-') << std::setw(130) << "-" << std::setfill(' ') << '\n';

    std::cout << "Set a UserName for Your Account: ";
    std::cin >> username;

    if (IsUsernameRegistered(username))
    {
        std::cout << "Username already exists. Please choose another username." << std::endl;
        Register();
        return;
    }

    std::cout << "Set a Numeric Password for your Account: ";
    std::cin >> pass1;
    std::cout << "Re-type Your Password: ";
    std::cin >> pass2;

    Sleep(1000);
    // Check if the entered passwords match
    if (pass1 == pass2)
    {
        std::cout << std::endl
                  << "Password was successfully set" << std::endl;
    }
    else
    {
        std::cout << std::endl
                  << "Passwords don't match" << std::endl;
        Register();
        return;
    }

    // Store the username and password
    RegisterUsernameAndPassword(username, pass1);

    Sleep(3000);
    // Proceed to user login
    Login();
}

// Implementation of Ask function in LoginOrRegister class
void LoginOrRegister::Ask()
{
    std::cout << std::endl;
    std::cout << "Transaction History Tracker\n\n";
    char choice;
    std::cout << "For Logging into Your BankAccount Press 'L' \n"
              << std::endl
              << "For Registering Your account to Program Press 'R' " << std::endl;
    std::cin >> choice;
    if (choice == 'L' || choice == 'l')
    {
        Login();
    }
    else if (choice == 'R' || choice == 'r')
    {
        Register();
    }
}

// Main function to interact with the user
int main()
{
    std::vector<int> TID;
    std::vector<std::string> Desct;
    std::vector<time_t> Date;
    std::vector<float> amnt;
    srand(time(NULL));

    LoginOrRegister Customer;
    Customer.Ask();
    std::cout << std::endl;
    std::cout << "Transaction History Tracker\n\n";

    while (true)
    {
        float amt;
        std::string Desc;
        time_t now = time(0);
        int ID = rand() % 10000;

        std::cout << "Your Transaction ID will be: " << ID << std::endl
                  << std::endl;

        std::cout << "Enter Your Transaction Details [Description , Amount]\n"
                  << '\n';
        std::cout << "Press 'done' to finish: \n";
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
    Sleep(3000);

    FinanceTracker Person;
    Person.setdata(TID, Desct, amnt, Date);

    std::cout << '\n';

    char chk;

Here:
    std::cout << '\n';
    std::cout << "For checking Bank-Statement Press 1 \n"
              << std::endl
              << "For checking Bank-Balance Press 2" << '\n'
              << std::endl;
    std::cout << "For Going Back to the Login Page Press 'L' \n"
              << std::endl
              << "For Registering An Account Press 'R'" << '\n';
    std::cin >> chk;

    if (chk == '1')
    {
        Person.showstatement();
        goto Here;
    }
    else if (chk == '2')
    {
        Person.showbalance();
        goto Here;
    }
    else if (chk == 'L' || chk == 'l')
    {
        std::cout << "Logging Out..." << std::endl;
        Sleep(2000);
        Customer.Login();
    }
    else if (chk == 'R' || chk == 'r')
    {
        std::cout << "Logging Out..." << std::endl;
        Sleep(2000);
        Customer.Register();
    }
    else
    {
        Sleep(1000);
        std::cout << "Quitting The Program...";
        Sleep(2000);
    }

    return 0;
}
