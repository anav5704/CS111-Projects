// Preprocessor Directives
#include<iostream>
#include<iomanip>
using namespace std;

// void swap (int& a, int& b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main() {

    // class BankAccount {
    //     private:
    //         string accountHolderName;
    //         double accountBalance;
    //     public:
    //         BankAccount(){
    //             accountHolderName = "";
    //             accountBalance = 0.0;
    //         }
    //         BankAccount(string name, double balance){
    //             accountHolderName = name;
    //             accountBalance = balance;
    //         }
    //         void deposit(double amount){
    //             accountBalance += amount;
    //         }
    //         void withdraw(double amount){
    //             accountBalance -= amount;
    //         }
    //         void displayInfo(){
    //             cout << "Name: " << accountHolderName << endl;
    //             cout << "Balance: $" << accountBalance << endl;
    //         }
    // };

    // BankAccount Anav("Anav", 100);
    // Anav.deposit(300.50);
    // Anav.withdraw(200.25);
    // Anav.displayInfo();



    // int a, b;

    // cout<<"Enter a: ";
    // cin>>a;
    // cout<<"Enter b: ";
    // cin>>b;
    // cout << "Before swap, a: " << a << " and b: " << b<<endl;
    // swap( a, b );
    // cout << "After swap, a: " << a << " and b: " << b<<endl;
    


    // float num, denom;

    // cout << "Enter a numerator: ";
    // cin >>  num;

    // while (cin.fail()){
    //     cin.clear();
    //     cin.ignore();
    //     cout << "Numbers man, numbers! Try again: ";
    //     cin >> num;
    // }

    // cout << "Enter a denominator: ";
    // cin >>  denom;

    // while (cin.fail()){
    //     cin.clear();
    //     cin.ignore();
    //     cout << "Numbers man, numbers! Try again: ";
    //     cin >> denom;
    // }

    // try {
    //     if (denom != 0){
    //         cout << num / denom;
    //     }
    //     else{
    //         throw runtime_error("Cant divide by 0 dumbass.");
    //     }
    // }

    // catch(const  runtime_error e){
    //     cout << "Error: " << e.what();
    // }  



//     struct student {
//         string name;
//         int id;
//     };

//     student all[3];

//    for (int i = 0; i < 3; i++){
//         cout << "Enter Name: ";
//        getline( cin >> ws, all[i].name);
//         cout << "Enter id: ";
//        cin >> all[i].id;
//    };

//    cout << "Student list:\n";
//      for (int i = 0; i < 3; i++){
//         cout << all[i].name;
//         cout << " ID: " << all[i].id << endl;
//    };



    // Fancy Table Using Loops

    // string berverages[] = {"Long Black", "Flat White", "Cappuccino", "Tea"};
    // string pricesRegular[] = {"$3.50", "$3.80", "$4.00", "$3.00"};
    // string pricesLarge[] = {"$3.70", "$4.20", "$4.30", "$3.20"};
    // string pricesExtraLarge[] = {"$4.00", "$4.50", "$5.00", "$3.50"};

    // int berveragesLength = sizeof(berverages) / sizeof(berverages[0]);

    // for (int i = 0; i < berveragesLength; i++){
    //     cout << setw(15) << left << berverages[i] << setw(10) << pricesRegular[i] << setw(10) << pricesLarge[i] << setw(10) << pricesExtraLarge[i] << endl;
    // }



    // Normal Table Using Characters

    // cout << " ______________________________________________________ " << endl;
    // cout << "|                                                      |" << endl; 
    // cout << "|                Programmers' Cafe Menu                |" << endl; 
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