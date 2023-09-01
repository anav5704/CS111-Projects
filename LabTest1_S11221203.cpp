// -----------------------------------------------------------------------------------------------------------//
// Pr0ject:            Lab Test 1, Semester 2, 2023                                                           //
// Name:               Anav Chand                                                                             //
// ID:                 S11221203                                                                              //
// Date:               01/09/2023                                                                             //
//                                                                                                            //
// Description:        This program takes input for plumbing type, booking during and if the order is an      //
//                     emergency or not and outputs a report with the main output being the total cost        //
// -----------------------------------------------------------------------------------------------------------//

#include<iostream>
#include<iomanip>
using namespace std;

// constant decleration
const string SENTINEL_ID = "S11221203";
const double MIN_BOOKING_DURANTION = 0;
const double MAX_BOOKING_DURANTION = 1000; 
const double EMERGENCY_COST = 100;
// HR is is short for hourly rate
const double HR_LEAK_REPAIR = 50;
const double HR_PIPE_INSTALLATION = 60;
const double HR_DRAIN_CLEANING = 70;


// Varivale initialisation
char plumbing_type;
char emergency_service;
double booking_durantion;
double total_cost;
bool continue_running = true;
string quit_running_key;


// ----------------------------------------- App Starts Here -------------------------------------------- //


int main()
{

    // Set output for all douubles to 2 decimal places
    cout << fixed << setprecision(2);

    cout << "+------------------------------------------------+\n";
    cout << "|      Welcome to the Plumbing Service app!      |\n";
    cout << "+------------------------------------------------+\n\n";

    while(continue_running){
        // Ask user for the type of repair
        cout << "Which type of plumbig do want to book?" << endl;
        cout << "A) Leak repair" << endl;
        cout << "B) Pipe installation" << endl;
        cout << "C) Drain cleaning" << endl;
        cout << "Please enter your choice (A / B / C): ";
        cin >> plumbing_type;

        // Ask user to re-enter until input is either a, b or c
        while (tolower(plumbing_type) != 'a' && tolower(plumbing_type) != 'b' && tolower(plumbing_type) != 'c'){
            cin.clear();
            // Declare dummy string
            string dummy;
            // Stash away the incorrect input
            // Getline is used incase the input was a long string
            getline(cin, dummy);
            cout << endl;
            cout << "Oops, something went wrong." << endl;
            cout << "Enter either \"A\", \"B\" or \"C\": ";
            cin >> plumbing_type;
        }

        cout << "What duration would you like to book the service for? (hours) ";
        cin >> booking_durantion;

        // Ask user to re-enter during until it is a number or withing the range
       while (cin.fail() || (booking_durantion < MIN_BOOKING_DURANTION || booking_durantion > MAX_BOOKING_DURANTION)){
            cin.clear();
            string dummy;
            getline(cin, dummy);
            cout << endl;
            cout << "Oops, something went wrong." << endl;
            cout << "Please re-enter your booking durantion: ";
            cin >> booking_durantion;
        }

        cout << "Is thsi an emmergency service? (Y/N)";
        cin >> emergency_service;

        while (tolower(emergency_service) != 'y' && tolower(emergency_service) != 'n'){
            cin.clear();
            string dummy;
            getline(cin, dummy);
            cout << endl;
            cout << "Oops, something went wrong." << endl;
            cout << "Enter either \"Y\" or \"N\": ";
            cin >> emergency_service;
        }


        // This chunk of code outputs the summary report based on the users choice for plunmbing type
        cout << endl;
        switch(tolower(plumbing_type)){
            case 'a':{
                // Total cost is calculated here
                total_cost = HR_LEAK_REPAIR * booking_durantion;
                cout << "Order summary:" << endl;
                cout << "Order type:\t\tLeak repair" << endl;
                cout << "Order duration\t\t" << booking_durantion << " hours" << endl;
                // Emergency cost is added if user wanted it
                if(tolower(emergency_service) == 'y'){
                    total_cost += EMERGENCY_COST;
                    // Additional line for emeergency cost gets printed too
                    cout << "Emergency cost \t\t$" << EMERGENCY_COST << endl; 
                }
                cout << "Total cost:\t\t$" << total_cost << endl;
            break;
            }

            case 'b':{
                total_cost = HR_PIPE_INSTALLATION * booking_durantion;
                cout << "Order summary:" << endl;
                cout << "Order type:\t\tPipe Installation" << endl;
                cout << "Order duration\t\t" << booking_durantion << " hours" << endl;
                if(tolower(emergency_service) == 'y'){
                    total_cost += EMERGENCY_COST;
                    cout << "Emergency cost \t\t$" << EMERGENCY_COST << endl; 
                }
                cout << "Total cost:\t\t$" << total_cost << endl;

            break;
            }

            case 'c':{
                total_cost = HR_DRAIN_CLEANING * booking_durantion;
                cout << "Order summary:" << endl;
                cout << "Order type:\t\tDrain cleaning" << endl;
                cout << "Order duration\t\t" << booking_durantion << " hours" << endl;
                if(tolower(emergency_service) == 'y'){
                    total_cost += EMERGENCY_COST;
                    cout << "Emergency cost \t\t$" << EMERGENCY_COST << endl; 
                }
                cout << "Total cost:\t\t$" << total_cost << endl;

            break;
            }
            // No "default" as user options are already validated
        }

        // Quits program if ID is entered or restartes if anything else is entered
        cout << endl;
        cout << "Enter ID to quit or any key to restart ";
        cin >> quit_running_key;
        if (quit_running_key == SENTINEL_ID){
            continue_running = false;
        }
        cout << endl;
    }

    return 0;
}
