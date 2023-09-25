#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}

int main()
{
    int data[] = {10, 4, 1, 6, 2, 8, 3, 9, 7, 0, 5};
    int dataLength = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, dataLength);

    system("PAUSE");
    return 0;
}