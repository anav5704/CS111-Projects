// Yummy 🍕 & 🧁 Shop 
// Made by Anav
// Date: 07/08/32023
// Purpose: This program calculates the change after users input the number of pizzas they want and their payment

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // Constants
    const string TITLE = "Welcome to the order and checkout for Yummy Pizza & Bakery Shop!";
    const double PIZZA_PRICE = 10.50;
    const int TEN_DOLLAR = 1000;
    const int FIVE_DOLLAR = 500;
    const int TWO_DOLLAR = 200;
    const int ONE_DOLLAR = 100;
    const int FIFTY_CENT = 10;
    const int TWENTY_CENT = 20;
    const int TEN_CENT = 10;
    const int FIVE_CENT = 5;
    const int CONVERSION_RATE = 100;

    // Variables
    int pizza_quantity, ten_dol, five_dol, two_dol, one_dol, fifty_cent, twenty_cent, ten_cent, five_cent, change_in_cents;
    double total_price, payment, change;

    // main program
    cout << fixed << setprecision(2) << endl;
    cout << setfill('-') << setw(TITLE.length())  << "" << endl;
    cout << TITLE << endl;
    cout << setfill('-') << setw(TITLE.length())  << "" << endl << endl;
    cout.fill(' ');
    cout << "We only sell Medium Pizzas for $" << PIZZA_PRICE << " each." << endl;
    cout << "How many do you want to buy?";
    cin >> pizza_quantity;
    cout << endl;

    total_price = pizza_quantity * PIZZA_PRICE;

    cout << "The total is: " << total_price <<endl;
    cout << "How much would you like to pay with?";
    cin >> payment;
    cout << endl;

    change = payment - total_price;
    change_in_cents = change * CONVERSION_RATE;

    cout << "KK thanks, your change is: $" << change << endl;
    cout << "You can pay with: " << endl;

    ten_dol = change_in_cents / TEN_DOLLAR;
    change_in_cents -= ten_dol * TEN_DOLLAR;

    five_dol = change_in_cents / FIVE_DOLLAR;
    change_in_cents -= five_dol * FIVE_DOLLAR;

    two_dol = change_in_cents / TWO_DOLLAR;
    change_in_cents -= two_dol * TWO_DOLLAR;

    one_dol = change_in_cents / ONE_DOLLAR;
    change_in_cents -= one_dol * ONE_DOLLAR;

    fifty_cent = change_in_cents / FIFTY_CENT;
    change_in_cents -= fifty_cent * FIFTY_CENT;

    twenty_cent = change_in_cents / TWENTY_CENT;
    change_in_cents -= twenty_cent * TWENTY_CENT;

    ten_cent = change_in_cents / TEN_CENT;
    change_in_cents -= ten_cent * TEN_CENT;

    five_cent = change_in_cents / FIVE_CENT;
    change_in_cents -= five_cent * FIVE_CENT;    

    cout << ten_dol << setw(50) << "Ten dollar note" << endl;
    cout << five_dol << setw(50) << "Five dollar note" << endl;
    cout << two_dol << setw(50) << "Five dollar note" << endl;
    cout << one_dol << setw(50) << "Five dollar note" << endl;
    cout << fifty_cent << setw(50) << "Five dollar note" << endl;
    cout << twenty_cent << setw(50) << "Five dollar note" << endl;
    cout << ten_cent << setw(50) << "Five dollar note" << endl;
    cout << five_cent << setw(50) << "Five dollar note" << endl;

    // display change $10, $5, $2, $1, 50c, 20c, 10c, 5

    // $100 $50 or $20 big no no

    system("PAUSE");
    return 0;
}

// price 25.50
// payment 30.00
// change 4.50
// 2 x $2
// 1 x $0.5