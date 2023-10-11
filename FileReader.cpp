#include<iostream>
#include<fstream>
using namespace std;

double averageArray(int array[], int size); // Prototype
 
int main()
{
    const int CAPACITY = 500;
    int size = 0;
    int temp = 0;
    int data[CAPACITY];

    ifstream readFile;
    readFile.open("Data.txt");

    while( readFile >> temp) {
        data[size] = temp;
        size ++;
    }

    readFile.close();

    cout << "Data from array: ";
    for(int i = 0; i < size; i++) cout << data[i] << " ";
    cout << "Average: " << averageArray(data, size) << endl;

    return 0;
}

double averageArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++) sum += array[i];
    return (sum * 1.0) / (size * 1.0);
}
