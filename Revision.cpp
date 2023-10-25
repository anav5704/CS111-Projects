#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 4; i++){
        for(int j = i; j < 4; j++){
            cout << " * ";
        }
        cout << endl;
    }

    int data[5] = {1, 23, 100, -10, 54};
    int min = data[0], max = data[0];

    for(int i = 0;  i < 5; i++){
        if(data[i] < min) min = data[i];
        else if(data[i] > max) max = data[i];
    }

    cout << "Min value: " << min << ", Max value: " << max << endl;

    return 0;
}