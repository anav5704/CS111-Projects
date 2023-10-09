#include<iostream>
#include<cstring>
using namespace std;

int main()
{ 
    const int CAPACITY = 20;
    int countA = 0, length = 0;

     char name[CAPACITY] = {"Anav Chand"};

    for(int i = 0; i < strlen(name); i++) {
        cout << name[i];
        if(name[i] == 'a' || name[i] == 'A') countA ++;
        if(name[i] != ' ') length++;
    }

    cout << "\nTotal number of A's: " << countA << endl;
    cout << "Length of name is: " << length << endl;

    system("PAUSE");
    return 0;
}