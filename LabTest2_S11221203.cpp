#include<iostream>
#include<iomanip>
using namespace std;

int validateInput(int upperLimit) { // takes in no parameters 
    int x;
    cin >> x;

    while(cin.fail() || (x < 1 || x > upperLimit)) // validates x by asking user to re-enter until x is number and within range
    {
        cin.clear();
        // Declare dummy string
        string dummy;
        // Stash away the incorrect input
        // Getline is used incase the input was a long string
        getline(cin, dummy);
        cout << endl;
        cout << "Oops, you entered an invalid option." << endl;
        cout << "Please try again: ";
        cin >> x;
    }

    return x; // returns x after it is confirmed to be a nunber
}

void appStartQuit(bool& continue_running){
    char decision;

    cout << "\nEnter S to start or Q to exit: ";
    cin >> decision;

    while (tolower(decision) != 's' && tolower(decision) != 'q'){
        cin.clear();
        string dummy;
        getline(cin, dummy);
        cout << endl
             << "Oops, something went wrong." << endl
             << "Enter either \"S\" or \"Q\": ";
        cin >> decision;
    }

    switch (tolower(decision)){
        case 's':
            continue_running = true;
            break;
        case 'q':
            continue_running = false;
            break;

        // No default is needed as input is already validated
    }
}

double calculateTotal(double price, double count){
    double total;
    total = price * count;
    return total;
}

int main()
{
    // Constants initializtion
    const char SENTINEL = 'Q';
    const int DESTINATION_COUNT = 4;
    const int ORDER_LIMIT = 25;

    // Variable declerations
    bool continue_running = true;
    char decision;
    char input;
    int destnationChoice;
    string destnation;
    double price;
    double orderQuantity;
    double totalPrice;

    // Set output for all douubles to 2 decimal places
    cout << fixed << setprecision(2);

    cout << "+--------------------------------------------+\n"
         << "|      Welcome to the the Fiji Eats app!      |\n"
         << "+--------------------------------------------+\n\n";

  appStartQuit(continue_running);

    while(continue_running){

        // Table for destination options
        cout << left << setw(30) << "\nWhich destination would you like to deliver to? " << endl << endl
                     << setw(30) << "   Destination" << setw(20) << "Price ($)" << endl
                     << setw(30) << "   ------------------------------------" << endl
                     << setw(30) << "1. Suva-Nausori corrido" << setw(20) << "10.00" << endl
                     << setw(30) << "2. Lami town" << setw(20) << "15.00" << endl
                     << setw(30) << "3. Sigatoka - Nadi area" << setw(20) << "25.00" << endl
                     << setw(30) << "4. Lautoka to Tavua" << setw(20) << "35.00" << endl << endl;

        cout << "Choose destnation: ";
        destnationChoice = validateInput(DESTINATION_COUNT);

        // Set destination and price based on selected option
        switch (destnationChoice) {
            case 1:
                destnation = "Suva-Nausori corridor";
                price = 10.00;
                break;
            case 2:
                destnation = "Lami town";
                price = 15.00;
                break;
            case 3:
                destnation = "Sigatoka - Nadi area";
                price = 25.00;
                break;
            case 4:
                destnation = "Lautoka to Tavua";
                price = 35.00;
                 break;
        // No default is needed as input is already validated
        }

        cout << "Enter number of items ordered: ";
        orderQuantity = validateInput(ORDER_LIMIT);

        totalPrice = calculateTotal(price, orderQuantity);

        cout << "Fees for " << orderQuantity << " items to " << destnation << " is $" << totalPrice << endl;

        appStartQuit(continue_running);
    }

    cout << "+------------------------------------------------------+\n"
         << "|      Thank you for using the the Fiji Eats app!      |\n"
         << "+------------------------------------------------------+\n\n";

    system("PAUSE");
    return 0;
}