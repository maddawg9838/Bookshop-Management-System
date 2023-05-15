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
    
    cout << "Are you a returning customer or a new customer?" 
    << "Please type in R for returning customer and N for new customer. " << endl;
    cin >> customerType;

    if (customerType == 'R' || 'r')
    {
        invalid == false;
        void returningCustomer();
    }
    else if (customerType == 'N' || 'n')
    {
        invalid == false;
        void newCustomer();
    }
    else if (customerType == 'N' || 'n')
    {
        invalid == false;
        void employee();
    }
    else
    {
        invalid == true;
        while (invalid == true)
        {
            cout << "Please enter the appropraite letters."
            << "Are you a returning customer or a new customer?" 
            << "Please type in R for returning customer and N for new customer. " << endl;
            cin >> customerType;
        }
    }
}

void login()
{
    char username, password;
    
    cout << "Please enter your login and password " << endl;
    
    cout << "Username: ";
    cin >> username;
    cout << endl;

    cout << "Password: ";
    cin >> password; 
    cout << endl;

}

void returningCustomer()
{
    void login();
}

void newCustomer()
{
    string username; 
    int length;  

    cout << "Usernames will need to meet the following requirements: " << endl;
    cout << "1. Between seven to ten characters long" << endl 
    << "2. One special character" << endl 
    << "3. Two numbers" << endl;

    getline(cin, username);
    length = username.length();

    if (length < 7 || length > 10)
    {
        invalid == true;
    }
    
    


}

void employee()
{

}
