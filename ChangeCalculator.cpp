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
    const int TEN_DOLLAR = 1000;
    const int FIVE_DOLLAR = 500;
    const int TWO_DOLLAR = 200;
    const int ONE_DOLLAR = 100;
    const int FIFTY_CENT = 50;
    const int TWENTY_CENT = 20;
    const int TEN_CENT = 10;
    const int FIVE_CENT = 5;
    const int CONVERSION_RATE = 100;

    // Variables
    int item_quantity, ten_dol, five_dol, two_dol, one_dol, fifty_cent, twenty_cent, ten_cent, five_cent, change_in_cents;
    double total_price, payment, change,  item_price, remaining_amount;
    string menu_item, item_name;

    // main program
    cout << fixed << setprecision(2) << endl;
    cout << setfill('-') << setw(TITLE.length())  << "" << endl;
    cout << TITLE << endl;
    cout << setfill('-') << setw(TITLE.length())  << "" << endl << endl;
    cout.fill(' ');
    // cout << "We only sell Medium Pizzas for $" << item_price << " each." << endl;
    cout << "Here's our menu:" << endl;
    cout << " ________________________________________________________" << endl;
    cout << "|Menu Item     |Small (S)   |Medium (M)  |Large (L)      |" << endl;
    cout << "|______________|____________|____________|_______________|" << endl;
    cout << "|Pizza (P)     |$15.50      |$20.50      |$25.50         |" << endl;
    cout << "|______________|____________|____________|_______________|" << endl;
    cout << "|Cake (C)      |$10.50      |$15.50      |$20.50         |" << endl;
    cout << "|______________|____________|____________|_______________|" << endl << endl;
    cout << "Disclaimer: if you fail to pay the full amaout, you will be banned from the shop." << endl;
    cout << "Quick Guide: Enter either P for Pizza or C for cake, followed by either S, M or L for the size" << endl;
    cout << "Example: Enter 'CM' for a medium sized cake" << endl << endl;
    cout << "What would you like ot buy? ";
    cin >> menu_item;

    if (menu_item == "PS" || menu_item == "ps"){
        item_price = 15.50;
        item_name = "small pizza";
    }
    else if (menu_item == "PM" || menu_item == "pm"){
        item_price = 20.50; 
        item_name = "medium pizza";
    }
    else if (menu_item == "PL" || menu_item == "pl"){
        item_price = 25.50; 
        item_name = "large pizza";
    }
    else if (menu_item == "CS" || menu_item == "cs"){
        item_price = 10.50; 
        item_name = "small cake";
    }
    else if (menu_item == "CM" || menu_item == "cm"){
        item_price = 15.50; 
        item_name = "medium cake";
    }
    else if (menu_item == "CL" || menu_item == "cl"){
        item_price = 20.50; 
        item_name = "large cake";
    }else{
        cout << "That's not on the menu. To compensate for your computer illiteracy, we will just sell you a medium pizza!" << endl;
        item_price = 20.50;
        item_name = "medium pizza";
    }

    cout << "How many " << item_name << "s would you like to buy? ";
    cin >> item_quantity;
    cout << endl;

    total_price = item_quantity * item_price;

    cout << "The total is: " << total_price <<endl;
    cout << "How much would you like to pay with? $";
    cin >> payment;
    cout << endl;

    remaining_amount = total_price - payment;

    if( payment < total_price ) {
        cout << "You are missing: $" << remaining_amount << endl;
        cout << "You are now banned from this shop!" << endl;
    }
    else {
        change = payment - total_price;
        change_in_cents = change * CONVERSION_RATE;

        cout << "KK thanks, your change is: $" << change << endl;
        cout << "This will be given to you using: " << endl;

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

        if (ten_dol != 0){
            cout << "\t"  << ten_dol  << "\t Ten dollar notes" << endl;
        }
        if (five_dol != 0){
            cout << "\t"  << five_dol  << "\t Five dollar notes" << endl;
        }
        if (two_dol != 0){
             cout << "\t"  << two_dol  << "\t Two dollar coins" << endl;
        }
        if (one_dol != 0){
            cout << "\t"  << one_dol  << "\t One dollar coins" << endl;
        }
        if (fifty_cent != 0){
            cout << "\t"  << fifty_cent  << "\t Fifty cent coins" << endl;
        }
        if (twenty_cent != 0){
            cout << "\t"  << twenty_cent  << "\t Twenty cent coins" << endl;
        }
        if (ten_cent != 0){
            cout << "\t"  << ten_cent  << "\t Ten cent coins" << endl;
        }
        if (five_cent != 0){
            cout << "\t"  << five_cent  << "\t Five cent coins" << endl;
        }
    }

    system("PAUSE");
    return 0;
}
