#include<iostream>
using namespace std;

void sum(int a, int b){
    return;
    // breaks out of the funtion
    cout << a + b;
}

int main (){    

    // variable declerations
    int x, y, z;


    // main program
    cout << "Enter 2 whole numbers: ";
    cin >> x >> y;

    sum(x, y);

    // formula
    z = x * y * ( y + x);
    cout << "The formula equated to: " << z <<endl;

    system("PAUSE");
    return 0;
}