#include <iostream>
using namespace std;

int main()
{
    bool continue_running = true, foundName;
    string query;

    const string SENTINEL = "q";
    const int SIZE = 50;

    string names[SIZE] = {
        "James", "Mary", "John", "Patricia", "Robert", "Jennifer", "Michael", "Linda",
        "William", "Elizabeth", "David", "Barbara", "Richard", "Susan", "Joseph",
        "Jessica", "Thomas", "Sarah", "Charles", "Karen", "Christopher", "Nancy",
        "Daniel", "Lisa", "Matthew", "Margaret", "Anthony", "Betty", "Mark", "Sandra",
        "Donald", "Ashley", "Steven", "Dorothy", "Paul", "Kimberly", "Andrew",
        "Emily", "Joshua", "Donna", "Kenneth", "Michelle", "Kevin", "Carol",
        "Brian", "Amanda", "George", "Melissa", "Edward", "Deborah"};

    while (continue_running)
    {
        foundName = false; // Reset found state

        cout << "Enter q to quit or name to search: ";
        cin >> query;

        if (query == SENTINEL)
        {
            continue_running = false;
        }

        for (int i = 0; i < SIZE; i++)
        {
            if (query == names[i])
            {
                cout << "Name: " << query << "was found!" << endl;
                foundName = true;
                break;
            }
        }

        if (!foundName && query != SENTINEL)
        {
            cout << "Unable to find name." << endl;
        }
    }

    return 0;
}