#include<iostream>
using namespace std;

int main()
{

    int x = 5;
    int *ptr = &x;
    int &e = *ptr;

    cout << "x before: " << x << endl;

    *ptr = 10;

    cout << "x: " << x << endl;
    cout << "pointer: " << e << endl;

    system("PAUSE");
    return 0;
}