#include<iostream>
#include<cstdlib> // for rand() and srand()
#include<ctime> // for time()
using namespace std;

int main()
{
    int a = 20, b = 50;
    // change the seed which is 1 by default
    srand( time(0));

    for(int i =0; i < 10; i++){
        cout << rand() % (b - a + 1) + a << endl;
    }

    return 0;
} 