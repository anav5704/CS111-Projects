#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    ofstream writeFile;
    writeFile.open("num-data.txt");

    for(int i = 2; i <= 100; i++) if(i % 2 == 0) writeFile << i << " ";

    writeFile.close();

    return 0;
}

