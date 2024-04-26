#include<iostream>
#include<iomanip>
using namespace std;

int main () {

    int row, col;

    cout << "Welcome to the Matrix Transposer!" << endl;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int matrix[row][col];

    cout << "Enter matrix elements:" << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Your matrix:" << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++){
            cout << setw(3) << matrix[i][j];
        }
        cout << endl;
    }

    cout << endl;
    cout << "Transposed matrix:" << endl;

     for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++){
            cout << setw(3) << matrix[j][i];
        }
        cout << endl;
    }

    system("PAUSE");
    return 0;
}