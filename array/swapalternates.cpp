#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void swapArray(int arr[], int size){
    // Using var 
    // int first = 0;
    // int second = 1;
    // while(second < size){
    //     swap(arr[first], arr[second]);
    //     first+= 2;
    //     second+= 2;
    // }

    // Using logic/loop
    for(int i = 0; i + 1 < size; i += 2){
        // swap(arr[i], arr[i+1]);
        // int temp = arr[i];
        arr[i] = arr[i+1] + arr[i];
        arr[i+1] = arr[i] - arr[i+1];
        arr[i] = arr[i] - arr[i+1];
    }
    cout << endl;
}

int main(){
    int size1, size2;
    cout << "Enter the size of an first array: ";
    cin >> size1;
    cout << "Enter the size of an second array: ";
    cin >> size2;

    int arr1[100] = {1,2,3,4,5,6};
    swapArray(arr1, size1);
    printArray(arr1, size1);

    int arr2[100] = {1,2,3,4,5};
    swapArray(arr2, size2);
    printArray(arr2, size2);
}