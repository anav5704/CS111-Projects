#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double count = -1, sum = 0;

    cout << endl;
    for(int i = 0; i <= 5000; i+=5){
        sum+=i;
        count++;
    }

    cout << "Sum is: " << sum  << endl;
    cout << "Count is: " <<  count << endl;
    cout << "Average is: " << sum / count << endl;
       cout << endl;

     for(int i = 1; i <= 10; i++){
       for (int j = 1; j <= 5; j++){
        cout << pow(i, j) << "\t" ;
       }
       cout << endl;
    }
    cout << endl;

    return 0;
}