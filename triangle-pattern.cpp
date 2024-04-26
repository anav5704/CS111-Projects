#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    // 3)

    // Using a for loop to iterate from 1 to 20
    for (int i = 0; i <= 20; i += 2)
    {
        cout << i << " ";
    }

    // 4)

    // Constants
    const int LOWER_LIMIT = 1;
    const int UPPER_LIMIT = 5;

    // Variables
    int row_col;

    cout << "Enter the number of rows and columns (1 - 5): ";
    cin >> row_col;

    // Validate input
    while (cin.fail() || row_col < LOWER_LIMIT || row_col > UPPER_LIMIT)
    {
        // Check if input was a string
        if (cin.fail())
        {
            cin.clear();
            string dummy;
            cin >> dummy;

            cout << "Oops! Something went wrong." << endl;
            cout << "Please enter a number: " << endl;
        }

        // Check if input was out of range
        else if (row_col < LOWER_LIMIT || row_col > UPPER_LIMIT)
        {
            cin.clear();
            cout << "Oops! Something went wrong." << endl
                 << "Try entering something between " << LOWER_LIMIT << " and " << UPPER_LIMIT << endl;
        }

        cin >> row_col;
    }

    // Print pattern
    for (int i = 0; i < row_col; i++)
    {
        for (int j = 0; j <= i && j < row_col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}