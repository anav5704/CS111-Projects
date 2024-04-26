#include<iostream>
#include"hack.h"
#include<ctime>
using namespace std;

void Int::target(string name){
    this->name = name;
}

void Int::start(){
    srand(time(0));
    const int a = rand() % 10;

    cout << "Hacking " << name << " ..." << endl;
    cout << (a % 2 == 0 ? "Hack successful" : "Hack unsuccessful") << endl;

}
