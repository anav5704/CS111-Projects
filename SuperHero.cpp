#include<iostream>
using namespace std;


    class superHero{

    private: 
        string name;
        string specialPower;
        int powerLevel;

    public:
        void set(string name, string specialPower, int powerLevel);
        void get();
    };

     void superHero::set(string name, string specialPower, int powerLevel){
            this->name = name;
            this->specialPower = specialPower;
            this->powerLevel = powerLevel;
    }

     void superHero::get(){
            cout << "Name: " << name << endl;
            cout << "Special Power: " << specialPower << endl;
            cout << "power Level: " << powerLevel << endl;
    }

int main(){

        superHero Ironman;
        Ironman.set("Ironman", "Jarvis", 100);
        Ironman.get();

    system("PAUSE");
    return 0;
}