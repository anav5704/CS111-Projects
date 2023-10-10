#include<iostream>
#include<fstream>
using namespace std;

double averageArray(double array[], double size); // Prototype
 
int main()
{
    ofstream writeFile;
    writeFile.open("Data.txt");

    for(int i = 0; i <= 50; i++) if(i % 2 == 0) writeFile << i << " ";

    writeFile.close();

    int size = 0;
    double length = 0;
    double data[size]; // only int works 🤷‍♂️

    ifstream readFile;
    readFile.open("Data.txt");

    while(readFile >> data[size++]) // This shi cool af 
    length = size;

    readFile.close();

    cout << "Data from array: ";
    for(int i = 0; i < size - 1; i++) cout << data[i] << " ";
    cout << "Average: " << averageArray(data, length) << endl;

    return 0;
}

double averageArray(double array[], double size){
    int sum = 0;
    for(int i = 0; i < size - 1; i++) sum += array[i];
    return sum / size;
}
