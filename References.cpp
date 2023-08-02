#include<iostream>
using namespace std;

void changeTo5(int& a, int& b){
    a = 5;
    b = 5;
}

int main(){

    int x = 10, y = 10;

    changeTo5( x, y);

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    system("PAUSE");
    return 0;
}
