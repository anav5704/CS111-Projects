#include<iostream>
#include<iomanip>
using namespace std;

const int COLS = 7;

void printTable(int array[][COLS], string data[], int rows){
    for(int i = 0; i < rows; i++){
        cout << setw(10) << data[i];

        for(int j = 0; j < COLS; j++){
            cout << setw(7) << array[i][j];
        }

        cout << endl;
    }
}

int sum(int array[][COLS], int rows){
    int  sum = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < COLS; j++){
            sum += array[i][j];
        }
    }

    return sum;
}

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

  printTable(timeTable, days, ROWS);
  cout << "The sum is: " << sum(timeTable, ROWS);

    return 0;
}