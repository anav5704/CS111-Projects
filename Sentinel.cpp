#include<iostream>
using namespace std;

int main()
{
    int input_num, positive_numbers = 0, negative_numbers = 0;
    const int SENTINEL = 0;
    const int MIN_RANGE = -100;
    const int MAX_RANGE = 100;

    cout << "***********************************************\n";
    cout << "Welcome to the Positive - Negative counter app!\n";
    cout << "***********************************************\n\n";

    cout << "Press 0 to tally or enter number to add to the counter: " << endl;
    cin >> input_num;

    while(input_num != SENTINEL){
        if(input_num < MIN_RANGE || input_num > MAX_RANGE){
            cout << "Input out of range (-100 - 100), please try again: " << endl;
        }
        else if(input_num > 0){
            positive_numbers++;
        }
        else{
            negative_numbers++;
        }
        cin >> input_num;
    }

    cout << "Positive numbers: " << positive_numbers << endl;
    cout << "Negative numbers: " << negative_numbers << endl;


    return 0;
}