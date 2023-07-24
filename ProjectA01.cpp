// Preprocessor Directives
#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    string berverages[] = {"Long Black", "Flat White", "Cappuccino", "Tea"};
    string pricesRegular[] = {"$3.50", "$3.80", "$4.00", "$3.00"};
    string pricesLarge[] = {"$3.70", "$4.20", "$4.30", "$3.20"};
    string pricesExtraLarge[] = {"$4.00", "$4.50", "$5.00", "$3.50"};

    int berveragesLength = sizeof(berverages) / sizeof(berverages[0]);

    for (int i = 0; i < berveragesLength; i++){
        cout << setw(15) << left << berverages[i] << setw(10) << pricesRegular[i] << setw(10) << pricesLarge[i] << setw(10) << pricesExtraLarge[i] << endl;
    }

    // cout << " ______________________________________________________ " << endl;
    // cout << "|                                                      |" << endl; 
    // cout << "|                Programmers Cafe Menu                 |" << endl; 
    // cout << "|______________________________________________________|" << endl;
    // cout << "|Berverage     |Regular     |Large     |Extra Large    |" << endl;
    // cout << "|______________|____________|__________|_______________|" << endl;
    // cout << "|Long Black    |$3.50       |$3.70     |$4.00          |" << endl;
    // cout << "|______________|____________|__________|_______________|" << endl;
    // cout << "|Flat White    |$3.80       |$4.20     |4.50           |" << endl;
    // cout << "|______________|____________|__________|_______________|" << endl;
    // cout << "|Cappuccino    |$4.00       |$4.30     |$5.00          |" << endl;
    // cout << "|______________|____________|__________|_______________|" << endl;
    // cout << "|Tea           |$3.00       |$3.20     |$3.50          |" << endl;
    // cout << "|______________|____________|__________|_______________|" << endl;
    
    return 0;
}   