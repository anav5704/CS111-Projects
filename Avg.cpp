#include<iostream>
using namespace std;

int main()
{
    double count = -1, sum = 0;
    
    for(int i = 0; i <= 5000; i+=5){
        sum+=i;
        count++;
    }

    cout << "Sum is: " << sum  << endl;
    cout << "Count is: " <<  count << endl;
    cout << "Average is: " << sum / count << endl;

    return 0;
}