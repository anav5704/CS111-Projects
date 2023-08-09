#include <iostream>
#include <fstream>
using namespace std;
 
int main(){

    ofstream outFile("todo.txt");

    outFile << "1. Buy groceries" << endl;
    outFile << "2. Finish homework" << endl;
    outFile << "3. Call mom" << endl;

    outFile.close();

    system("PAUSE");
    return 0;
}