#include<iostream>
using namespace std;

int main()
{
    // Using for loop (no modulus)
    int sum1 = 0;
    for(int i = 0; i <= 1000; i += 7){
       sum1 += i;
    }
    cout << "\nSum using for loop (no modulus) is\t" << sum1 << endl;


    // Using while loop (no modulus)
    int sum2 = 0;
    int i = 0;
    while(i <= 1000){
        sum2 += i;
        i += 7;
    }
    cout << "Sum using while loop (no modulus) is\t" << sum2 << endl;


    // Using for loop (using modulus)
    int sum3;
    for(int i = 0; i <= 1000; i++){
        if(i % 7 == 0)
            sum3 += i;
    }
    cout << "Sum using for loop (using modulus) is\t" << sum3 << endl;

    // Using do while (using modulus)
    int k = 0;
    int sum4 = 0;
    do {
        if(k % 7 == 0)
        sum4 += k;

        k++;
    }while(k <= 1000);
    cout << "Sum using do while (using modulus) is\t" << sum4 << endl;


    // Using for loop (no modulus)
    cout << "\nFor Loop:" << endl;
    for(int j = 99; j >= 1; j -= 9){
        cout << j << endl;
    }


    // Using while loop (no modulus)
    int j = 99;
    cout << "\nWhile Loop:" << endl;
    while(j >= 1){
        cout << j << endl;
        j -= 9;
    }
    

    // Using for loop (using modulus)
    cout << "\nFor Loop with Modulus:" << endl;
    for(int j = 99; j >= 1; j--){
        if(j % 9 == 0)
            cout << j << endl;
    }

    return 0;
}