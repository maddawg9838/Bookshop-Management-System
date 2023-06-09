#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function Prototypes
void login();
void returningCustomer();
void newCustomer();
void validateCustomer();
void employee();
void validateEmployee(int);

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

        switch (customerType)
        {
        case 'R':
        case 'r':
            returningCustomer();
            invalid = false;
            break;
        case 'N':
        case 'n':
            newCustomer();
            invalid = false;
            break;
        case 'E':
        case 'e':
            employee();
            invalid = false;
            break;
        default:
            invalid = true;
            cout << "ERROR! Please enter the correct letters" << endl;
        }
    } while (invalid == true);
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
    login();
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
        returningCustomer();
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
    int ID;
    
    cout << "Awesome! Hello Employee! Please enter your unique employee ID" << endl;
    /*
    cout << "Employee ID: ";
    cin >> ID;
    
    validateEmployee(ID);
    */
}

/*
void validateEmployee(int ID)
{
    bool match = false;
    ifstream filename;
    CONST_LINER = ",";
    
    filename.open("EmployeesInfo.txt");
    while (match != true)
    {
        ifstream >> employeeName >> fileID;
        if (fileID == ID)
        {
            match = true;
            return true;
        }
        else
        {
            match = false
        } 
    }
}
*/
