#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    string one = "012345";
    string two = one.substr(0, 1);
    bool gay = true;
    int x = 1000;

    cout << two << endl;

    cout << sizeof(x) << endl;

    cout << "hey\\\"?" << endl ;

    gay == true ? cout << "youre gay" << endl : cout << "not gay" << endl;

    cout << "Beverage" << setw(20) << "Regular" << setw(20) << "Large" << setw(20) << "Extra Large" << setw(20);

    return 0;
}