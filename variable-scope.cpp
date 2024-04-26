#include<iostream>
using namespace std;

int main()
{
    int i = 1;

    {
        int i = 5;
        i--;
        cout << "I form inner scope: " << i << endl;
    }

    i++;
    cout << "I from outer scope: " << i << endl;

    // Moral of the story? They were 2 different Is all along...

    return 0;
}