#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //---------------- Writing to a file ----------------//

    ofstream writeFile;
    writeFile.open("exam-results.txt");

    writeFile << "Name\tScore\n\n";

    writeFile << "Tom\t100\n";
    writeFile << "Mere\t90\n";
    writeFile << "Sarah\t95";

    writeFile.close();

    //---------------- Reading from file ----------------//

    ifstream readFile;
    readFile.open("exam-results.txt");

    string name, headerOmit;
    int mark;

    getline(readFile, headerOmit); // Omit Header

    while (readFile >> name >> mark)
    {
        cout << name << ": " << mark << endl;
    }

    readFile.close();

    return 0;
}