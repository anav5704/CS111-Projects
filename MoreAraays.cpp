#include <iostream>
using namespace std;

int addArray(int arr[], int size)
{ // Fucntion to add all members of array
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

int multiplyArray(int arr[], int size)
{ // Fucntion to multiply all members of array
    int product = 1;
    for (int i = 1; i <= size; i++) product *= arr[i];
    return product;
}

void dounble_up(int arr[], int size){
    for(int i = 0; i < size; i++) arr[i] *= 2;
}

int main()
{
    int numberOne = 1; // The wrong way!
    int numberTwo = 2;
    int numberThree = 3;
    int numberFour = 4;
    int numberFive = 5;
    int numberSic = 6;
    int numberSeven = 7;
    int numberEight = 8;
    int numberNine = 9;
    int numberTen = 10;

    const int CAPACITY = 10;
    int arrayOfNumbers[CAPACITY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // The right way!

    cout << "Sum of array is: " << addArray(arrayOfNumbers, CAPACITY) << endl;
    cout << "Product of array is: " << multiplyArray(arrayOfNumbers, CAPACITY) << endl;
    cout << "Average of array is: " << addArray(arrayOfNumbers, CAPACITY) / CAPACITY << endl;

    // ------------------------------------------ Part 2 ------------------------------------------ //

    int current_size = 0;
    const  int capacity = 100;
    int inputs[current_size];
    int input;

    while (cin >> input){
        if (current_size < capacity){
            inputs[current_size] = input;
            current_size++;
        }
    }

    dounble_up(inputs, current_size);

    cout << "Your array: ";
    for(int i = 0; i < current_size; i++) cout << inputs[i] << " | ";

    system("PAUSE");
    return 0;
}