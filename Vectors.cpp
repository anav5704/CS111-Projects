#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> array;

    array.push_back(1);
    array.push_back(2);
    array.push_back(3);

    for(int i =0; i < array.size(); i++ ){
        cout << array[i] << endl;
    }

    system("PAUSE");
    return 0;
}