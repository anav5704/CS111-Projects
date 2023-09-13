// Assignment 1 (Semester 2) 2023 //
// Student ID: S11220401 //
// Danvil George Singh //
// Date: 03/09/2023 //


// Purpose: This program asks the user (and verifies) their first and last name, age, gender, height, weight, level of activity, and goals. //
//              The program then computates the BMR and TDEE, and provides Dietary and Fitness recommendations whilst providing approriate title for the user, as well as the first initial of the first name, and their surname. //
//              The program repeats until the key 'Q' is entered. //

#include <iostream>

using namespace std;

int main (){
	
	// Declaration of Variables //
	char sen_char;
	string fname;
	string fname_initial;
	string lname;
	int age;
	char gender;
	double height;
	double weight;
	int goal;
	int activity;
	double bmr;  						// Basal Metabolic Rate //
    double tdee; 						// Total Dietary Energy Expenditure //
    double dci;							// Daily Calorie Intake //
	bool run;
	
	
	
	// Declaration of Constants //
	const int MIN_AGE = 1;
	const int MAX_AGE = 150;
	const double MIN_HEIGHT = 45;
	const double MAX_HEIGHT = 350;
	const double MIN_WEIGHT = 20;
	const double MAX_WEIGHT = 550;
	const int MIN_ACTIVITY = 1;
	const int MAX_ACTIVITY = 5;
	const int MIN_GOAL = 1;
	const int MAX_GOAL = 3;
	
	// Activity Level Constants from first (1) to last (5). //
	const double ACTIVITY_MULTIPLIER_1 = 1.2;
	const double ACTIVITY_MULTIPLIER_2 = 1.375;
	const double ACTIVITY_MULTIPLIER_3 = 1.55;
	const double ACTIVITY_MULTIPLIER_4 = 1.725;
	const double ACTIVITY_MULTIPLIER_5 = 2.0;
	
	// TDEE Constants //
	const double M_BMR_CONSTANT = 88.362;			// Set of Male Constants. //
    const double M_WEIGHT_MULTIPLIER = 13.397;
    const double M_HEIGHT_MULTIPLIER = 4.799;
    const double M_AGE_MULTIPLIER = 5.677;
    
    const double F_BMR_CONSTANT = 447.593;			// Set of Female Constants. //
    const double F_WEIGHT_MULTIPLIER = 9.247;
    const double F_HEIGHT_MULTIPLIER = 3.098;
    const double F_AGE_MULTIPLIER = 4.330;
    
    // Dietary and Fitness Recommendation Constants //
    const double CALORIE_INTAKE_CONSTANT = 500;
	
	
	
	
	
	
	
	
	
	// Beginning of program //
	cout << " _____________________________________________"<<endl;
	cout << "|                                             |" <<endl;
	cout << "| *Personal Fitness and Diet Advisory System* |" <<endl;
	cout << "|_____________________________________________|"<<endl;
	cout << endl; // used to keep order in the program. //
	
	cout << "To continue, press C. To exit, press Q. " ;
	cin >> sen_char;
	cout <<endl;
	
	while (cin.fail() || sen_char != 'C' && sen_char != 'c' && sen_char != 'Q' && sen_char !=  'q'){
		if (cin.fail()){
			cin.clear();
        	string dummy;
        	cin >> dummy;
	        cout << "Please enter a valid key (Either C to continue or Q to exit). " ;
	        cin >> sen_char;
			}
		else if (sen_char != 'C' && sen_char != 'c' && sen_char != 'Q' && sen_char !=  'q'){
			cin.clear();
			cout << "Please enter a valid key (Either C to continue or Q to exit). " ;
	        cin >> sen_char;	
		}
	}
			
	
	
	if (sen_char == 'C' || sen_char == 'c'){
		run = true;
	}
	else if (sen_char == 'Q' || sen_char ==  'q'){
		run = false;
	}
	
	while (run == true){																								//Program runs if C or c is entered //
		cout << "Kindly enter your first and last name, with a space in between both names." << endl;
		cin >>fname>>lname; 																						// double input of variables to save space. //
		fname_initial = fname.substr(0, 1);    																		// getting initial of first name for report. //
		
		cout << "Kindly enter your age in terms of years." << endl;
		cin >>age;
		
		while (cin.fail() || age < MIN_AGE || age > MAX_AGE){ 
			if (cin.fail()){
				cin.clear();
				string dummy;
				cin >> dummy;
				cout <<"Please enter a valid age."<<endl;
				cin >> age;	
		}
			else if (age < MIN_AGE || age > MAX_AGE){
				cin.clear();
				cout <<"Please enter a valid age."<<endl;
				cin >> age;	
			}
		}
		
			
		cout << "Kindly enter your weight in kilograms (kg)." <<endl;
		cin >> weight;
		while (cin.fail() || (weight < MIN_WEIGHT || weight > MAX_WEIGHT)){
		if (cin.fail()){
			cin.clear();
			string dummy;
			cin >> dummy;
			cout <<"Please enter a valid weight in kilograms."<<endl;
			cin >> weight;	
		}
			else if (weight < MIN_WEIGHT || weight > MAX_WEIGHT){
				cin.clear();
				cout <<"Please enter a valid weight in kilograms."<<endl;
				cin >> weight;	
			}	
		}
			
		
		cout << "Kindly enter your height in centimeters (cm)." <<endl;
		cin >>height;
		while (cin.fail() || (height < MIN_HEIGHT || height > MAX_HEIGHT)){
			if (cin.fail()){
				cin.clear();
				string dummy;
				cin >> dummy;
				cout <<"Please enter a valid height in centimeters."<<endl;
				cin >> height;	
		}
			else if (height < MIN_HEIGHT || height > MAX_HEIGHT){
				cin.clear();
				cout <<"Please enter a valid height in centimeters."<<endl;
				cin >> height;	
			}	
		}
	
		
		cout << "Kindly enter M if you are male, or F if you are female." <<endl;
		cin >>gender;
		
		while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f'){
			cin.clear();
            string dummy;
			cin >> dummy;
			cout << "Entry not recognized. Please enter M for male, and F for female. " <<endl;
			cin >> gender;
		}
		
		cout << endl;
		cout << "Select your activity level from list: " << endl;
		cout << "\t1. Sedentary (little or no exercise) " <<endl;
		cout << "\t2. Lightly Active (light exercise/sports 1-3 days/week) " <<endl;
		cout << "\t3. Moderately Active (moderate exercise/sports 3-5 days/week) " <<endl;
		cout << "\t4. Very Active (hard exercise/sports 6-7 days a week)" <<endl;
		cout << "\t5. Super Active (very hard exercise, physical job, or training twice a day) " <<endl;
		cout <<endl;
		cout << "Enter a value from 1-5 from the list. " ;
		cin >> activity;
		while (cin.fail() || (activity < MIN_ACTIVITY || activity > MAX_ACTIVITY)){
			if (cin.fail()){
				cin.clear();
				string dummy;
				cin >> dummy;
				cout <<"Please enter a valid option from the list (1-5)."<<endl;
				cin >> activity;	
		}
			else if (activity < MIN_ACTIVITY || activity > MAX_ACTIVITY){
				cin.clear();
				cout <<"Please enter a valid option from the list (1-5)."<<endl;
				cin >> activity;	
			}	
		}
		
		cout << endl;
		cout << "Select your goal from list: " <<endl;
		cout << "\t1. Lose Weight. " <<endl;
		cout << "\t2. Gain Weight. " <<endl;
		cout << "\t3. Maintain Muscle. " <<endl; 
		cout <<endl;
		cout << "Enter a value from 1-5 from the list. " ;
		cin >> goal;
		while (cin.fail() || (goal < MIN_GOAL || goal > MAX_GOAL)){
			if (cin.fail()){
				cin.clear();
				string dummy;
				cin >> dummy;
				cout <<"Please enter a valid option from the list (1-3)."<<endl;
				cin >> goal;	
		}
			else if (goal < MIN_GOAL || goal > MAX_GOAL){
				cin.clear();
				cout <<"Please enter a valid option from the list (1-3)."<<endl;
				cin >> goal;	
			}	
		}
		
		
		cout << endl;
		
		// BMR Calculation //
		if (gender == 'M' || gender == 'm'){
			bmr = M_BMR_CONSTANT + (M_WEIGHT_MULTIPLIER * weight) + (M_HEIGHT_MULTIPLIER * height) - (M_AGE_MULTIPLIER * age);	
		}
		else if (gender == 'F' || gender == 'f'){
			bmr = F_BMR_CONSTANT + (F_WEIGHT_MULTIPLIER * weight) + (F_HEIGHT_MULTIPLIER * height) - (F_AGE_MULTIPLIER * age);	
		}
		
		// TDEE Calculation //
		if (activity == 1){
			tdee = bmr * ACTIVITY_MULTIPLIER_1;
		}
		else if (activity == 2){
			tdee = bmr * ACTIVITY_MULTIPLIER_2;
		}
		else if (activity == 3){
			tdee = bmr * ACTIVITY_MULTIPLIER_3;
		}
		else if (activity == 4){
			tdee = bmr * ACTIVITY_MULTIPLIER_4;
		}
		else if (activity == 5){
			tdee = bmr * ACTIVITY_MULTIPLIER_5;
		}
		
		cout << "------------------------------------------------------------------------" <<endl;
		
		// Report for user//
		
		if (gender == 'M' || gender == 'm'){
			cout << "Dear Mr. " <<fname_initial<< ". " <<lname<< ","<<endl;
			cout << endl;
			cout << "Based on the information, please refer to the following values and recommendations." <<endl;
			cout << endl;
			cout << "Your Bascal Metabolic Rate (BMR) is " << bmr << " calories/day" << endl;
			cout << endl;
            cout << "Your Total Dietary Energy Expenditure (TDEE) is " << tdee << " calories/day" << endl;
            cout << endl;
			
			// Recommendation Calculation //
			if (goal == 1){
				dci = tdee - CALORIE_INTAKE_CONSTANT;
				cout << "Dietary recommendation: Your daily intake target should be " << dci << " calories/day in order to lose weight" << endl;
                cout << "Fitness recommendation: Combine a balanced diet with cardio exercises for effective weight loss" << endl;
			}
			else if (goal == 2){
				dci = tdee;
				cout << "Dietary recommendation: Your intake target should be " << dci << " calories/day in order to maintain your weight" << endl;
                cout << "Fitness recommendation: Continue with a balanced diet and exercises to maintain your weight" << endl;			
			}
			else if (goal == 3){
				dci = tdee + CALORIE_INTAKE_CONSTANT;
				cout << "Dietary recommendation: Your intake target should be " << dci << " calories/day in order to gain muscle" << endl;
                cout << "Fitness recommendation: Include more protein in your diet and focus on strength training exercises" << endl;
				
			}	
			}
		else if (gender == 'F' || gender == 'f'){
			cout << "Dear Ms. " <<fname_initial<< ". " <<lname<< ","<<endl;
			cout << endl;
			cout << " Based on the information, please refer to the following values and recommendations." <<endl;
			cout << endl;
			cout << "Your Bascal Metabolic Rate (BMR) is " << bmr << " calories/day" << endl;
            cout << "Your Total Dietary Energy Expenditure (TDEE) is " << tdee << " calories/day" << endl;
			
			// Recommendation Calculation //
			if (goal == 1){
				dci = tdee - CALORIE_INTAKE_CONSTANT;
				cout << "Dietary recommendation: Your daily intake target should be " << dci << " calories/day in order to lose weight" << endl;
                cout << "Fitness recommendation: Combine a balanced diet with cardio exercises for effective weight loss" << endl;
			}
			else if (goal == 2){
				dci = tdee;
				cout << "Dietary recommendation: Your intake target should be " << dci << " calories/day in order to maintain your weight" << endl;
                cout << "Fitness recommendation: Continue with a balanced diet and exercises to maintain your weight" << endl;			
			}
			else if (goal == 3){
				dci = tdee + CALORIE_INTAKE_CONSTANT;
				cout << "Dietary recommendation: Your intake target should be " << dci << " calories/day in order to gain muscle" << endl;
                cout << "Fitness recommendation: Include more protein in your diet and focus on strength training exercises" << endl;
				
			}	
			}
			
			
		system ("PAUSE");
		cout << "To continue, press C. To exit, press Q. " ;
		cin >> sen_char;
		cout <<endl;
		
		while (cin.fail() || sen_char != 'C' && sen_char != 'c' && sen_char != 'Q' && sen_char !=  'q'){
			if (cin.fail()){
				cin.clear();
	        	string dummy;
	        	cin >> dummy;
		        cout << "Please enter a valid key (Either C to continue or Q to exit). " ;
		        cin >> sen_char;
				}
			else if (sen_char != 'C' && sen_char != 'c' && sen_char != 'Q' && sen_char !=  'q'){
				cin.clear();
				cout << "Please enter a valid key (Either C to continue or Q to exit). " ;
		        cin >> sen_char;	
			}
		}
				
		
		
		if (sen_char == 'C' || sen_char == 'c'){
			run = true;
		}
		else if (sen_char == 'Q' || sen_char ==  'q'){
			run = false;
		}
			
		}

	if (run == false){																			// This will happen if Q or q is entered //
		cout << "Thank you for using this program."<<endl;
		cout << "------------------------------------------------------------------------" <<endl;
		system ("PAUSE");
	}	
	return 0;
}
