#include<iostream>
using namespace std;

// void rev(int arr[], int size){
//     int temp[100] = {0};
//     int n = size - 1; 
//     cout << "Reverse array: ";
//     for(int i = 0; i < size; i++){
//         temp[i] = arr[n];
//         cout << temp[i] << " ";
//         n--;
//     }
// }

void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i = 0 ; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    // int size;
    // cout << " Enter the size of an array: ";
    // cin >> size;

    int arr1[5] = {1,2,3,4,5};
    int arr2[6] = {1,2,3,4,5,6};

    reverse(arr1, 5);
    reverse(arr2, 6);
    
    printArray(arr1, 5);
    printArray(arr2, 6);
}