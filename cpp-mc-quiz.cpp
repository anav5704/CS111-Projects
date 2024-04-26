#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    char answer;

    cout << "Welcome to the C++ Quiz! \n\n";

    cout << "Q1. High level Languages are machine independent. (t/f): ";
    cin >> answer;

    if (answer == 't')
    {
        score++;
    }

    cout << "Q2. C++ is a low level language. (t/f): ";
    cin >> answer;

    if (answer == 'f')
    {
        score++;
    }

    cout << "Q3. Variables must declared before use. (t/f): ";
    cin >> answer;

    if (answer == 't')
    {
        score++;
    }

    cout << "Q4. \"_area_triangle_1\" is a valid variable name. (t/f): ";
    cin >> answer;

    if (answer == 't')
    {
        score++;
    }

    cout << "Q5. A circle is used to denote a decision in a flowchart. (t/f): ";
    cin >> answer;

    if (answer == 'f')
    {
        score++;
    }

    cout << "\nYou scored " << score << "/5!" << endl;

    return 0;
}