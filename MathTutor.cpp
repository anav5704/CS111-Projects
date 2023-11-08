#include <iostream>
#include <cstdlib> // nedded for rand() and srand()
#include <cmath>
#include <ctime> // needed for time()
using namespace std;

int readint() // takes in no parameters
{
    int x;
    cin >> x;

    while(cin.fail()) // validates x by asking user to re-enter until x is number
    {
        cin.clear();
        string notint;
        cin >> notint;
        cout << "Input " << notint << " is not an integer. Enter an integer.";
        cin >> x;
    }

    return x; // returns x after it is confirmed to be a nunber
}

char signchar(int x) // takes in a single interger paramter
{
    if(x >= 0)
    {
        return '+'; // returns a + if parameter is a positive number
    }

    else
    {
        return '-'; // returns a - if parameter is a negative number
    }
}

int main()
{
    const int MAXINT = 10;
    const int MININT = -10;
    int a = 0;
    int b = 0;
    int x;
    int score = 0;
    int attempts  =0;
    char reply;

    srand(time(0)); // seed the random based on current time

    cout << "***********************************\n";
    cout << "*        CS111 math tutor         *\n";
    cout << "***********************************\n\n";
    cout << "Enter 'L'' to try a linear  and 'Q' to try a quadratic equation.\nAny other key to quit.";
    cin >> reply;

    while(reply == 'L' || reply == 'Q')
    {
        // Re-assign values of a and b for every new attempt
        a = rand() % (MAXINT - MININT + 1) + MININT;
        b = rand() % (MAXINT - MININT + 1) + MININT;

        if(reply == 'L')
        {
            cout << "\nWhat is the solution to\n";
            cout << a << "x " << signchar(a * b) << " " << fabs(a * b) << " = 0\n";
            x = readint();
            attempts ++;

            if( a * x + a * b == 0)
            {
                score++;
                cout << "Great!\n\n";
            }

            else
            {
                cout << "Oops!\n\n";
            }
        }

        else
        {
            cout << "\nWhat is a solution to\n";
            cout << "x^2 " << signchar(a + b) << " " << fabs(a + b) << "x  " << signchar(a * b) << " " << fabs(a * b)  << " = 0\n";
            cin >> x;
            attempts ++;


            if( x * x + (a + b)* x + a * b == 0)
            {
                score++;
                cout << "Great!\n\n";
            }

            else
            {
                cout << "Oops!\n\n";
            }
        }

        cout << "Enter 'L'' to try a linear  and 'Q' to try a quadratic equation.\nAny other key to quit.";
        cin >> reply;
    }

    cout << "You scored " << score << " point(s) in " << attempts << " attempt(s)" << endl;
    return 0;
}
