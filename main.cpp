#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
void login();
void returningCustomer();
void newCustomer();
void employee();

// Global Variables
bool invalid;

int main()
{
    char customerType;
    
        do
        {
            cout << "Are you a returning customer or a new customer? "
         << "Please type in R for returning customer and N for new customer. " << endl;
    cin >> customerType;

    if (customerType == 'R' || customerType == 'r')
    {
        invalid = false;
        void returningCustomer();
    }
    else if (customerType == 'N' || customerType == 'n')
    {
        invalid = false;
        void newCustomer();
    }
        else if (customerType == 'E' || customerType == 'e')
        {
            invalid = false;
            void employee();
        }
        else
        {
            invalid = true;
            cout << "ERROR! Please enter the correct letters" << endl;
        }
        }while (invalid == true);
}

void login()
{
    string username, password;

    cout << "Please enter your login and password " << endl;
    cout << endl;

    cout << "Username: ";
    getline(cin, username); cin.ignore(); cin.get();

    cout << "Password: ";
    getline(cin, password); cin.ignore(); cin.get();
    cout << endl;

    cout << "Awesome! Thanks for loginning in with your username and password";
    return;
}

void returningCustomer()
{
    void login();
}

void newCustomer()
{
    string username;
    int length, numbers, specialCharacter;

    cout << "Usernames will need to meet the following requirements: " << endl;
    cout << "1. Between seven to ten characters long" << endl
         << "2. One special character" << endl
         << "3. Two numbers" << endl;

    getline(cin, username);
    length = username.length();

    for (int i = 0; i < length; i++)
    {
    }

    if (length < 7 || length > 10)
    {
        invalid = true;
    }
    else if (numbers < 2)
    {
        invalid = true;
    }
    else if (specialCharacter < 1)
    {
        invalid = true;
    }
    else
    {
        cout << "Great! You are now registered as a customer. Please proceed to login." << endl;
        void returningCustomer();
    }

    while (invalid == true)
    {
        cout << "Error!" << endl;
        cout << "Usernames will need to meet the following requirements: " << endl;
        cout << "1. Between seven to ten characters long" << endl
             << "2. One special character" << endl
             << "3. Two numbers" << endl;
        getline(cin, username);
    }
}

void employee()
{
    cout << "Awesome! Hello Employee!" << endl;
    return;
}
