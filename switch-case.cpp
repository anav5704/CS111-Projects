#include<iostream>
#include<iomanip>
using namespace std;

int main () {
    int num = 4, total = 0;

    switch(num){
        case 1:
        case 2: total = 5;
        case 3: total = 10;
        case 4: total = total + 30;
        case 8: total = total + 60;
        default: total = total + 40;

        // cout is 130
        
    }

    cout << "The total is: " << total;
    return 0;
}