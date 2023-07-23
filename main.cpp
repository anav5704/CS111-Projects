#include<iostream>
using namespace std;

int main() 
{

    int a,  b;
    cout << "Enter two numbers: " ;
    cin >> a >> b ;
    auto add =  [](int a, int b) -> int {
        return a + b;
    };
    cout << add(a, b);

    // int array[6];
    // int max , min;

    // cout << "Enter 6 numbers for me to sort pls ;)" << endl;
    // cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4] >> array[5] ;


    // for(int i = 0; i < 6; i++){
    //     if (array[i] < min){
    //         min = array[i];
    //     }
    //     else{
    //         max = array[i];
    //     }
    // }

    // cout << "Max value: " << max << endl ;
    // cout << "Min value: " << min;


    return 0;
}