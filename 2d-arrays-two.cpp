#include<iostream>
using namespace std;

const int COLS = 3;
void printArray(int array[][COLS], int rows){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < COLS; j++){
            cout << array[i][j] << " | ";
        }
        cout << endl;
    }
}

int main()
{
    const int countries = 5;
    const int medals = 3;

    int array[countries][medals] = 
    {
        { 1, 0, 1 }, 
        { 1, 1, 1 }, 
        { 1, 0, 0 }, 
        { 0, 1, 0 }, 
        { 0, 0, 1 }
    };

    printArray(array, countries);

    return 0;
}