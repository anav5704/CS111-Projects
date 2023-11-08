#include <iostream>
#include <fstream>
using namespace std;
 
int main(){

    int contactsLength, process;

    cout << endl;
    cout << "Welcome to the phone book app!" << endl;

    while(true){
        cout << "-----------------------" << endl;
        cout << "Enter 1 to add contacts" << endl;
        cout << "Enter 2 to view contacts" << endl;
        cout << "Enter 3 to exit the app" << endl;
        cout << "-----------------------"<< endl << endl;
        cout << "Your Choice: ";
        cin >> process;

        if (process == 1){
            ofstream write("Contact.txt", ios::app);
            string number;

            if(!write){
                cout << "Error: cannot write to file." << endl;
                continue;
            }
            else{
                cout << "How many contacts would you like to add? ";
                cin >> contactsLength;
                for(int i = 0; i < contactsLength; i++){
                    cin >> number;
                    write << number << endl;
                }
                cout << endl;
                write.close();
            }
        }

        else if (process == 2) {
            ifstream read("Contact.txt");
            string number;

            if(!read){
                cout << "Error: cannot read file." << endl;
                continue;
            }
            else{
                cout << "Contact list:" << endl;
                while(getline(read, number)){
                    cout << number << endl;
                }
                cout << endl;
                read.close();
            }
        }

        else if (process == 3){
            cout << "Exiting..." << endl;
            break;
        }
    }

    system("PAUSE");
    return 0;
}