#include <iostream>
using namespace std;

int main() 
{
    // Variable declerations
    string first_name, last_name, email_adress;
    int phone_number;

    // main program
    cout << "Please enter your first name: ";
    cin >> first_name;
    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "Please enter your email adress: ";
    cin >> email_adress;
    cout << "Please enter your phone number: ";
    cin >> phone_number;

    cout << "Dear " << first_name << " " << last_name << endl;
    cout << "You are invited to my public lecture next Friday.\n";
    cout << "Your details: " << endl;
    cout << "Email adress: " << email_adress << endl;
    cout << "Phone number: " << phone_number << endl;
    
    return 0;
}