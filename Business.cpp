#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string business, owner, type;
    
    cout << "*****************************************\n"
         << "Welcome to the Business Registration app!\n"
         << "*****************************************\n\n";

    ofstream writeFile("Business.txt", ios::app);

    if(!writeFile){
        cout << "Oops, an error occurerd." << endl;
    }

    else{
    cout << "Please enter your name: ";
    cin >> owner;
    writeFile << owner << " ";

    cout << "Please enter your business name: ";
    cin >> business;
    writeFile << business << " ";

    cout << "Please enter the business type: ";
    cin >> type;
    writeFile << type << endl;

    writeFile.close();
    }

    return 0;
}