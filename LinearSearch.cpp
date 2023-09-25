#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int query){
    for(int i = 0; i < size; i++){
        if(arr[i] == query) return i;
    }
    return -1;
}

int main()
{
    int data[] = {10, 4, 1, 6, 2, 8, 3, 9, 7, 0, 5};
    int dataLength = sizeof(data) / sizeof(data[0]);
    int target = 6;

    int result = linearSearch(data, dataLength, target);
    result == -1 ? cout << "No match found :(" << endl : cout << "Found match at index: " << result << endl;
    
    system("PAUSE");
    return 0;
}