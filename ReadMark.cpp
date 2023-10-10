#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

double averageMarks(double marks[], double length);

int main()
{
    double marks[20];
    string names[20];

    int i = 0, rows = 0;
    string headerOmitter;

    ifstream readFile;
    readFile.open("ExamResults.txt");

    if(!readFile) cout << "File not found" << endl;

    else {
        getline(readFile, headerOmitter);

        while(!readFile.eof()){
            readFile >> names[i] >> marks[i++];
            rows++;
        }

        for(int i = 0; i < rows; i++) cout << names[i] << ":\t " << marks[i] << endl;
        cout << "The average is: " << averageMarks(marks, rows) << endl;
    }

    readFile.close();
    return 0;
}

double averageMarks(double marks[], double length){
    double sum = 0;
    for(int i = 0; i < length; i++) sum +=  marks[i];
    return sum / length;
}