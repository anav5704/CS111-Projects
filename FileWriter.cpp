#include<iostream>
#include<fstream>
using namespace std;

double averageArray(int array[], int size); // Prototype
 
int main()
{
    ofstream writeFile;
    writeFile.open("Data.txt");

    for(int i = 0; i <= 100; i++) if(i % 2 == 0) writeFile << i << " ";

    writeFile.close();

    int size = 0;
    int data[size];

    ifstream readFile;
    readFile.open("Data.txt");

    while(readFile >> data[size++]) // This shi cool af 

    readFile.close();

    cout << "Data from array: ";
    for(int i = 0; i < size - 1; i++) cout << data[i] << " ";
    cout << "Average: " << averageArray(data, size) << endl;

    return 0;
}

double averageArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size - 1; i++) sum += array[i];
    return (sum * 1.0) / (size * 1.0);}
