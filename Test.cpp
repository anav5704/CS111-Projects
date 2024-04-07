#include<iostream>
using namespace std;

int doubleNum(int num){
    num *= 2;
    return num / 3;
}

int main(){
    int mark, num = 21;

    mark = doubleNum(num);
    cout << "Result: " << num;

    return 0;
}