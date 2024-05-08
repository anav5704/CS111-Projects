#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0, countSpace = 0;

    const int CAPACITY = 200;
    char  sentence[CAPACITY] = {"The Quick Brown Fox Jumps Over The Lazy Dog"};

    for (int i = 0; i < strlen(sentence); i++){
        if (sentence[i] == 'A' || sentence[i] == 'a') countA ++;
        if (sentence[i] == 'E' || sentence[i] == 'e') countE ++;
        if (sentence[i] == 'I' || sentence[i] == 'i') countI ++;
        if (sentence[i] == 'O' || sentence[i] == 'o') countO ++;
        if (sentence[i] == 'U' || sentence[i] == 'u') countU ++;
        if (sentence[i] == ' ') countSpace ++;
    }

    cout << "A: " << countA << endl;
    cout << "E: " << countE<< endl;
    cout << "I: " << countI << endl;
    cout << "O: " << countO << endl;
    cout << "U: " << countU << endl;
    cout << "Words: " << countSpace + 1;

    return 0;
}