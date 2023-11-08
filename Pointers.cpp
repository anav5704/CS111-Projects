#include<iostream>
using namespace std;

int main()
{
    int number = 5;
    int *Pnumber = &number;

    cout << "Value: " << *Pnumber << endl;
    cout << "Adress: " << &number << endl;

    return 0;
}