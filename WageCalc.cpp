#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){

    char category;
    double hours_worked;
    double HOURLY_RATE, TAX_RATE,net_wages, gross_wage, overtime;
    const double OVERTIME = 1.5;
    const int NORMAL_HOURS = 40;

    cout << fixed << setprecision(2);
    cout << "*****************************************\n";
    cout << "* Wage Calculator for Shoe Lace Company *\n";
    cout << "*****************************************\n\n";

    cout << "Enter Category: 'M' for Management, 'F' for Floor Worker: ";
    cin >> category;
    while ( tolower(category) != 'm' || tolower(category) != 'f'){
        // if ( tolower(category) == 'm' || tolower(category) == 'f'){
        //     break;
        // }
        // else{
            cout << "Invalid Category, please try again: ";
            cin >> category;
        // }
    }

    cout << "Enter Hours Worked: ";
    cin >> hours_worked;
    while (cin.fail()){
        cin.clear();
        cin.ignore();
        cout << "Please enter a number and try again: ";
        cin >> hours_worked;
    }

    switch(tolower(category)){
        case 'm' : {
                HOURLY_RATE = 10.60;
                TAX_RATE = 0.35;
            }
            break;

        case 'f' : {
                HOURLY_RATE = 8.30;
                TAX_RATE = 0.20;
            }
            break;

        default :
            cout << "Invalid input" << endl;
            return 0;
    }

    if (hours_worked <= 40){
        gross_wage = hours_worked * HOURLY_RATE;    
        net_wages = gross_wage - (gross_wage * TAX_RATE);
    }

    else {
        gross_wage = NORMAL_HOURS * HOURLY_RATE;    
        overtime = (hours_worked - 40) * HOURLY_RATE * OVERTIME;
        net_wages = (gross_wage + overtime) - ((gross_wage + overtime) * TAX_RATE);
    }

    cout << "\nSummary: " << endl;
    cout << "Staff category: " << (tolower(category) == 'm' ? "Management" : "Floor Worker") << endl;
    cout << "Hours worked: " << hours_worked << endl;
    cout << "Net wage: $" << net_wages << endl << endl;

    system("PAUSE");
    return 0;
}