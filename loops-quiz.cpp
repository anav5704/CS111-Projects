// "If you think it's simple, then you have misunderstood the problem." - Bjarne Stroustrup

#include <iostream>
using namespace std;

int main()
{

    int stars = 5;

    // Use a For Loop and a While loop to complete these questions:

    // 1) Write a program that prints 5 stars in a line (easy)

    for (int i = 1; i <= stars; i++)
    {
        cout << "* ";
    }

    cout << endl << endl;

    // Output: * * * * *

    // ------------------------------------------------------------------------

    // 2) Write a program that prints 5 stars, each on a new line (medium)

    for (int i = 1; i <= stars; i++)
    {
        cout << "*" << endl;
    }

    cout << endl;

    // Output:
    // *
    // *
    // *
    // *
    // *

    // ------------------------------------------------------------------------

    // 3) Write a program that prints 25 stars (5 rows and 5 columns) (hard)

    for (int i = 1; i <= stars; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    cout << endl;
    
    // Output:
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    return 0;
}