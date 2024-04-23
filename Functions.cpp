#include <iostream>
using namespace std;

// 3
void greet_user(string user_name)
{
    cout << "Hey " << user_name << endl;
}

// 4
int calculate_age(int year_of_birth, int current_year)
{
    return current_year - year_of_birth;
}

// 5
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

int main()
{
    int number1, number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Sum: " << add(number1, number2) << endl;
    cout << "Difference: " << subtract(number1, number2) << endl;
    cout << "Product: " << multiply(number1, number2) << endl;
    cout << "Quotient: " << divide(number1, number2) << endl;

    return 0;
}

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    return num1 / num2;
}