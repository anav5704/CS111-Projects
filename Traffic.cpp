#include<iostream>
using namespace std;

int main()
{
    double speed;
    int fine;
    bool was_drunk;
    char drunk_or_not;
    const int speed_limit = 60;

    cout << "****************************************\n";
    cout << "Welcome to the Traffic Infringements app!\n";
    cout << "****************************************\n\n";

    cout << "Plase enter speed (km/hr): ";
    cin >> speed;

    while(cin.fail() || speed < speed_limit){
        cin.clear();
        string dummy;
        getline(cin, dummy);
        cout << "Invalid input, plese try again: ";
        cin >> speed;
    }

    cout << "Was the dirver drunk (Y/N)? ";
    cin >> drunk_or_not;
    
    while(tolower(drunk_or_not) != 'y' && tolower(drunk_or_not) != 'n'){
        cin.clear();
        string dummy;
        getline(cin, dummy);
        cout << "Invalid input, plese try again: ";
        cin >> drunk_or_not;
    }

    if(tolower(drunk_or_not) == 'y'){
        was_drunk = true;
    }

    if(tolower(drunk_or_not) == 'n'){
        was_drunk = false;
    }

    if(speed > speed_limit && speed < 65){
        cout << "You have been warned!" << endl;
        if(was_drunk){
            cout << "Also, go take a shower." << endl;
        }
    }
    else if(speed > 65 && speed <= 70){
        fine = (speed - 60) * 5;
        cout << "You have been fined: $"<< fine << endl;
        if(was_drunk){
            cout << "Also, go take a shower." << endl;
        }
    }
    else if(speed > 70){
        if(was_drunk){
            fine = ((speed - 70) * 15) + 70;
            cout << "You have been fined: $"<< fine << endl;
            cout << " Spend the day/night." << endl;
        }
        else{
            fine = 50;
            cout << "You have been fined: $"<< fine << endl;
        }
    }
    else{
        cout << "Nah you're all good mate!" << endl;
    }

    cout << endl;
    cout << "The driver was going " << speed << " km/hr and was " << (was_drunk ? "drunk" : "not drunk") << endl;
    
    return 0;
}