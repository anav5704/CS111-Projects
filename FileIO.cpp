#include<iostream>
#include<fstream>
#include<iomanip>                   // Needed for Getline()
using namespace std;


int main()
{
    //---------------- Writing to a file ----------------//

    ofstream write;              
    write.open("ExamResults.txt");         

    write << "Name\tMakrs\n\n";   

    write << "Indee\t95\n";       
    write << "Anav\t92\n";       
    write << "Rohan\t90";      

    write.close();                   


    //---------------- Reading from file ----------------//

    ifstream read;                  
    read.open("ExamResults.txt");           

    string name, headerOmit;  
    int mark;   

    getline(read, headerOmit); // Omit Header @indeevar 😉😉😉😉😉

    while(read >> name >> mark){
       cout << name << ": " << mark + 5 << endl;
    }                 

    read.close();                  

    return 0;
}