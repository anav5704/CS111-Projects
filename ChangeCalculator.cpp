// Yummy 🍕 & 🧁 Shop 
// Made by Anav
// Date: 07/08/32023
// Purpose: This program calculates the change after users input the number of pizzas they want and their payment

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // const int PIZZAS;
    const string TITLE = "Welcome to the order and checkout for Yummy Pizza & Bakery Shop!";
    const double PIZZA_PRICE = 10.50;

    // main program

    cout << TITLE << endl;
    cout << setfill('-') << setw(TITLE.length())  << "" << endl;
    cout.fill(' ');
    cout << "We only sell Medium Pizzas for $" << PIZZA_PRICE << " each." << endl;

    // enter numebr of pizzas

    // calculate total price

    // enter cash paid ( > total )

    // display change $10, $5, $2, $1, 50c, 20c, 10c, 5

    // $100 $50 or $20 big no no

    system("PAUSE");
    return 0;
}