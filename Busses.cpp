#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    const int ROWS = 4;
    const int COLS = 7;

    string locations[4] = {"Nasese", "Raiwai", "Raiwaqa","Vatuwaqa"};
    string days[7] = {"Mon", "Tue", "Wed","thur", "Fri", "Sat", "Sun"};
    int timeTable[ROWS][COLS] = {{1, 2, 3, 4, 5, 6, 7},
                                 {1, 2, 3, 4, 5, 6, 7},
                                 {1, 2, 3, 4, 5, 6, 7},
                                 {1, 2, 3, 4, 5, 6, 7}};

    cout << left << setw(10) << "";
    for(int k = 0; k < COLS; k++) cout << left << setw(7) << days[k];
    cout << endl;

    for(int i = 0; i < ROWS; i++){
        cout << left << setw(10) << locations[i];
        for(int j = 0; j < COLS; j++){
            cout << left << setw(7) << timeTable[i][j];
        }
        cout << endl;
    }

    return 0;
}