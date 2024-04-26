// ---------------------------------------------------------------------------------------------------------- //
// Project:            Assignment 1, Semester 2, 2023                                                         //
// Name:               Anav Chand                                                                             //
// ID:                 S11221203                                                                              //
// Date:               19/08/2023                                                                             //
//                                                                                                            //
// Description:        This program takes input (users name, age, gender, activity level and goals)           //
//                     and outputs the bmr, tdee, dietary and fitness recommendations accordingly             //
//                                                                                                            //
// I have used "cout << endl;" quite a lot that may seem random but it is to keep the output clean            //
// The use of switch cases over if statements was just my pereference, the syntax looks cleaner               //
// ---------------------------------------------------------------------------------------------------------- //

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    // Constant declerations
    const int MIN_AGE = 10;
    const int MAX_AGE = 200;
    const double MIN_HEIGHT = 50;
    const double MAX_HEIGHT = 300;
    const double MIN_WEIGHT = 25;
    const double MAX_WEIGHT = 500;
    // The capital letters (A - E) used here map to their repsective activity levels
    const double ACTIVITY_LEVEL_A_MULTIPLIER = 1.2;
    const double ACTIVITY_LEVEL_B_MULTIPLIER = 1.375;
    const double ACTIVITY_LEVEL_C_MULTIPLIER = 1.55;
    const double ACTIVITY_LEVEL_D_MULTIPLIER = 1.725;
    const double ACTIVITY_LEVEL_E_MULTIPLIER = 2.0;
    // Coeffecients and bmr constants used to calculate TDEE 
    const double MALE_BMR_CONSTANT = 88.362;
    const double MALE_WEIGHT_COEFFECIENT = 13.397;
    const double MALE_HEIGHT_COEFFECIENT = 4.799;
    const double MALE_AGE_COEFFECIENT = 5.677;
    const double FEMALE_BMR_CONSTANT = 447.593;
    const double FEMALE_WEIGHT_COEFFECIENT = 9.247;
    const double FEMALE_HEIGHT_COEFFECIENT = 3.098;
    const double FEMALE_AGE_COEFFECIENT = 4.330;
    const double CALORIC_INTAKE_CONSTANT = 500;

    // Variable initializations
    string first_name;
    string surname;
    string title;
    string first_name_initial;
    string surname_initial;
    double age;
    double height;
    double weight;
    double bmr;  // Basal Metabolic Rate
    double tdee; // Total Dietary Energy Expenditure
    double daily_caloric_intake;
    char gender;
    char user_goal;
    char activity_level;
    char decision;
    bool continue_running;


    // ----------------------------------------- App Starts Here -------------------------------------------- //


    // Set output for all douubles to 2 decimal places
    cout << fixed << setprecision(2);

    cout << "+------------------------------------------------+\n"
         << "|      Welcome to the Fitness and Diet app!      |\n"
         << "+------------------------------------------------+\n\n";

    cout << "Enter S to start or Q to exit: ";
    cin >> decision;

    while (tolower(decision) != 's' && tolower(decision) != 'q'){
        cin.clear();
        string dummy;
        getline(cin, dummy);
        cout << endl
             << "Oops, something went wrong." << endl
             << "Enter either \"S\" or \"Q\": ";
        cin >> decision;
    }

    switch (tolower(decision)){
    case 's':
        continue_running = true;
        break;
    case 'q':
        continue_running = false;
        break;
    }

    while (continue_running){
        cout << "Enter your first name: ";
        cin >> first_name;
        // Get the first letter of the name using substring. O is the starting position and 1 is the length
        first_name_initial = first_name.substr(0, 1);
 
        cout << "Enter your surname: ";
        cin >> surname;
        surname_initial = surname.substr(0, 1);

        cout << endl;
        cout << "Enter your age (years): ";
        cin >> age;

        while (cin.fail() || (age < MIN_AGE || age > MAX_AGE)){
            cin.clear();
            // Dummy value to stash age value if a string was entered
            string dummy;
            // Getline is used to accomodate for long strings
            getline(cin, dummy);
            cout << endl;
            cout << "Oops, something went wrong." << endl;
            cout << "Try entering a number like \"20\"" << endl;
            cout << "Please re-enter your age: ";
            cin >> age;
        }

        cout << endl;
        cout << "Please enter your gender(M for male / F for female): ";
        cin >> gender;

        while (tolower(gender) != 'm' && tolower(gender) != 'f'){
            cin.clear();
            string dummy;
            getline(cin, dummy);
            cout << endl
                 << "Oops, something went wrong." << endl
                 << "Enter either \"M\" or \"F\": ";
            cin >> gender;
        }

        // Title is set based on gender
        switch (tolower(gender)){
            case 'm':
                title = "Mr.";
                break;
            case 'f':
                title = "Ms.";
                break;
        }

        cout << endl;
        cout << "Please enter your height(cm): ";
        cin >> height;

        while (cin.fail() || (height < MIN_HEIGHT || height > MAX_HEIGHT)){
            cin.clear();
            string dummy;
            getline(cin, dummy);
            cout << endl
                 << "Oops, something went wrong." << endl
                 << "Try entering a number like \"170\"" << endl
                 << "Please re-enter your height: ";
            cin >> height;
        }

        cout << endl;
        cout << "Please enter your weight(kg): ";
        cin >> weight;

        while (cin.fail() || (weight < MIN_WEIGHT || weight > MAX_WEIGHT)){
            cin.clear();
            string dummy;
            getline(cin, dummy);
            cout << endl
                 << "Oops, something went wrong." << endl
                 << "Try entering a number like \"75\"" << endl;
            cout << "Please re-enter your weight: ";
            cin >> weight;
        }

        cout << endl
             << "What is your activity level?" << endl
             << "A) Sedentary" << endl
             << "B) Lightly active" << endl
             << "C) Moderately active" << endl
             << "D) Very active" << endl
             << "E) Super active" << endl
             << "Please enter your activity level (A / B / C / D / E): ";
        cin >> activity_level;

        while (tolower(activity_level) != 'a' && tolower(activity_level) != 'b' && tolower(activity_level) != 'c' && tolower(activity_level) != 'd' && tolower(activity_level) != 'e'){
            cin.clear();
            string dummy;
            getline(cin, dummy);
            cout << endl
                 << "Oops, something went wrong." << endl
                 << "Enter either \"A\", \"B\", \"C\", \"D\" or \"E\": ";
            cin >> activity_level;
        }

        cout << endl
             << "What is your goal?" << endl
             << "A) Lose weight" << endl
             << "B) Maintain weight" << endl
             << "C) Gain muscle" << endl
             << "Please enter your user_goal (A / B / C): ";
        cin >> user_goal;

        while (tolower(user_goal) != 'a' && tolower(user_goal) != 'b' && tolower(user_goal) != 'c'){
            cin.clear();
            string dummy;
            getline(cin, dummy);
            cout << endl
                 << "Oops, something went wrong." << endl
                 << "Enter either \"A\", \"B\" or \"C\": ";
            cin >> user_goal;
        }

        // Logic for BMR
        switch (tolower(gender)){
            case 'm':
                bmr = MALE_BMR_CONSTANT + (MALE_WEIGHT_COEFFECIENT * weight) + (MALE_HEIGHT_COEFFECIENT * height) - (MALE_AGE_COEFFECIENT * age);
                break;
            case 'f':
                bmr = FEMALE_BMR_CONSTANT + (FEMALE_WEIGHT_COEFFECIENT * weight) + (FEMALE_HEIGHT_COEFFECIENT * height) - (FEMALE_AGE_COEFFECIENT * age);
                break;
                // No need for "default:" as the input is already validated and will only be what it is allowed to be
        }

        // Logic for TDEE
        switch (tolower(activity_level)){
            case 'a':
                tdee = bmr * ACTIVITY_LEVEL_A_MULTIPLIER;
                break;
            case 'b':
                tdee = bmr * ACTIVITY_LEVEL_B_MULTIPLIER;
                break;
            case 'c':
                tdee = bmr * ACTIVITY_LEVEL_C_MULTIPLIER;
                break;
            case 'd':
                tdee = bmr * ACTIVITY_LEVEL_D_MULTIPLIER;
                break;
            case 'e':
                tdee = bmr * ACTIVITY_LEVEL_E_MULTIPLIER;
                break;
        }

        cout << endl
             << "Dear " << title << " " << first_name_initial << ". " << surname << endl << endl
             << "Here is your report:" << endl
             << "Your Bascal Metabolic Rate (BMR) is " << bmr << " calories/day" << endl
             << "Your Total Dietary Energy Expenditure (TDEE) is " << tdee << " calories/day" << endl;

        // Logic for recommendations
        switch (tolower(user_goal)){
            case 'a':{
                daily_caloric_intake = tdee - CALORIC_INTAKE_CONSTANT;
                cout << "Dietary recommendation: Your daily intake target should be " << daily_caloric_intake << " calories/day in order to lose weight" << endl
                     << "Fitness recommendation: Combine a balanced diet with cardio exercises for effective weight loss" << endl;
                break;
            }
            case 'b':{
                daily_caloric_intake = tdee;
                cout << "Dietary recommendation: Your intake target should be " << daily_caloric_intake << " calories/day in order to maintain your weight" << endl
                     << "Fitness recommendation: Continue with a balanced diet and exercises to maintain your weight" << endl;
                break;
            }
            case 'c':{
                daily_caloric_intake = tdee + CALORIC_INTAKE_CONSTANT;
                cout << "Dietary recommendation: Your intake target should be " << daily_caloric_intake << " calories/day in order to gain muscle" << endl
                     << "Fitness recommendation: Include more protein in your diet and focus on strength training exercises" << endl;
                break;
            }
        }

        cout << endl;
        cout << "Enter R to restart or Q to exit: ";
        cin >> decision;

        while (tolower(decision) != 'r' && tolower(decision) != 'q'){
            cin.clear();
            string dummy;
            getline(cin, dummy);
            cout << endl
                 << "Oops, something went wrong." << endl
                 << "Enter either \"R\" or \"Q\": ";
            cin >> decision;
        }

        switch (tolower(decision)){
            case 'r':
                continue_running = true;
                break;
            case 'q':
                continue_running = false;
                break;
        }
    }

    cout << endl
         << "+----------------------------------------------------------+" << endl
         << "|      Thank you for using the Fitness and Diet app!       |" << endl
         << "|       Until next time, stay healty and stay safe.        |" << endl
         << "+----------------------------------------------------------+" << endl << endl
         << "Exiting..." << endl;

    return 0;
}