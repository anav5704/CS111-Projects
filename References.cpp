#include<iostream>
using namespace std;

void swap(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){

    int x = 9, y = 6;

    swap( x, y);

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    system("PAUSE");
    return 0;
}
