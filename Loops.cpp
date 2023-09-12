#include<iostream>
using namespace std;

int main()
{
    // Using for loop (no modulus)
    cout << "For Loop:" << endl;
    for(int i = 0; i <= 100; i += 7){
        cout << i << endl;
    }


    // Using while loop (no modulus)
    int i = 0;
    cout << "While Loop:" << endl;
    while(i <= 100){
        cout << i << endl;
        i += 7;
    }

    // Using for loop (using modulus)
    cout << "For Loop with Modulus:" << endl;
    for(int i = 0; i <= 100; i++){
        if(i % 7 == 0)
            cout << i << endl;
    }

    // Using for loop (no modulus)
    cout << "For Loop:" << endl;
    for(int j = 99; j >= 1; j -= 9){
        cout << j << endl;
    }

    // Using while loop (no modulus)
    int j = 99;
    cout << "While Loop:" << endl;
    while(j >= 1){
        cout << j << endl;
        j -= 9;
    }

    // Using for loop (using modulus)
    cout << "For Loop with Modulus:" << endl;
    for(int j = 99; j >= 1; j--){
        if(j % 9 == 0)
            cout << j << endl;
    }

    return 0;
}