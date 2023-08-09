#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> array;

    array.push_back(1);
    array.push_back(2);
    array.push_back(3);

    for(int i = array.size() -1; i > -1; i-- ){
        cout <<"i: " << i << endl;
        cout << array[i] << endl;
        array.pop_back();
    }

    // Ternary Expressions are THE shit 🫡
    array.empty() ? cout << "Yep it's empty"  << endl : cout << "Nah it's got elements" << endl;

    system("PAUSE");
    return 0;
}