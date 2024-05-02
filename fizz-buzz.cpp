#include <iostream>
using namespace std;

int main()
{
    // Normal Method
    for (int i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        if (i % 7 == 0)
        {
            cout << "Buzz" << endl;
        }
        if (i % 3 == 0 && i % 7 == 0)
        {
            cout << "FizzBuzz" << endl;
        }
    }

    // Clean Method
    for (int i = 0; i <= 100; i++)
    {
        string output = "";

        if (i % 3 == 0)
        {
            output += "Fizz";
        }
        if (i % 7 == 0)
        {
            output += "Buzz";
        }

        cout << output << endl;
        output = "";
    }

    return 0;
}
