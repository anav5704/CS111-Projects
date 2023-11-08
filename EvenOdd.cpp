#include<iostream>
using namespace std;

int main()
{
    int Even = 0, Odd = 0;
        
    cout << "*********************************************\n";
    cout << "Welcome to the Even - Odd number counter app!\n";
    cout << "*********************************************\n\n";

    for(int i = 0; i < 10; i++){
        int input;
        cout << "Enter number: ";
        cin >> input;
        if(input % 2 == 0) Even++;
        if(input % 2 == 1) Odd++;
    }

    cout << "Even numbers: " << Even << endl;
    cout << "Odd numbers: " << Odd << endl;

    return 0;
}
