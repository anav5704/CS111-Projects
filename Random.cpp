#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand( time(0));

    for(int i =0; i < 10; i++){
        cout << rand() % 100 << endl;
    }
    return 0;
}