#include <iostream>
using namespace std;

int main()
{
    // Constants
    const int SESSION_1_MIN = 1;
    const int SESSION_1_MAX = 5;
    const int SESSION_2_MIN = 6;
    const int SESSION_2_MAX = 10;

    const int SESSION_RATE_1 = 30;
    const int SESSION_RATE_2 = 25;
    const int SESSION_RATE_3 = 20;

    const int EQUIPMENT_RENTAL_COST = 20;
    const int SENTINEL = 11221203;

    // Variables
    int sessions = 0;
    int total_cost = 0;
    int total_earnings = 0;
    int customer_counter = 0;
    char equipment_rental;
    bool continue_running = true;

    // ------------------------------------------------ App Start ------------------------------------------------ //

    cout << "+----------------------------------------------+\n"
            "|     Welcome to Fitness Training Services     |\n"
            "+----------------------------------------------+\n\n";

    while (continue_running)
    {
        cout << "Please enter the number of sessions: ";
        cin >> sessions;

        if (sessions == SENTINEL)
            break;

        // Validate session input
        while (cin.fail() || sessions < SESSION_1_MIN)
        {
            if (cin.fail())
            {
                cin.clear();
                string dummy;
                cin >> dummy;
            }

            cout << "Incorrect Input,try again: ";
            cin >> sessions;
        }

        if (sessions <= SESSION_1_MAX)
        {
            // Price for 1 - 5 sessions
            total_cost = sessions * SESSION_RATE_1;
        }
        else if (sessions <= SESSION_2_MAX)
        {
            //           (     Price for 5 sessions     ) + (             Price for the rest            )
            total_cost = (SESSION_1_MAX * SESSION_RATE_1) + ((sessions - SESSION_1_MAX) * SESSION_RATE_2);
        }
        else
        {
            //           (     Price for 5 sessions     ) + (            Price for 6 - 10 sessions           ) + (             Price for the rest            )
            total_cost = (SESSION_1_MAX * SESSION_RATE_1) + ((SESSION_2_MAX - SESSION_1_MAX) * SESSION_RATE_2) + ((sessions - SESSION_2_MAX) * SESSION_RATE_3);
        }

        cout << "Would you like include equipment? (Y/N): ";
        cin >> equipment_rental;

        // Validate equipment rental input
        while (equipment_rental != 'Y' && equipment_rental != 'N')
        {
            cin.clear();
            string dummy;
            cin >> dummy;
            cout << "Incorrect Input, try again: ";
            cin >> equipment_rental;
        }

        if (equipment_rental == 'Y')
        {
            total_cost += EQUIPMENT_RENTAL_COST;
        }

        cout << "Total cost: $" << total_cost;
        total_earnings += total_cost;
        customer_counter++;
    }

    cout << "Data Summary:\n"
         << "Customers: " << customer_counter
         << "\nTotal Earnings: $" << total_earnings;

    return 0;
}