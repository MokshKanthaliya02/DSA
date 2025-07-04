#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sort(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j + 1 < size; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;            
            }
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;;
    }
}

int main(){
    // raw array
    // int size = 25;
    // int arr1[100] = {9,5,4,6,7,8,2,1,6,9,8,1,3,5,4,7,8,9,6,3,1,4,5,2,1};
    // sort(arr1,size); // Method 1: using Complete logic
    // // sort(arr1, arr1+size); // Method 2: Using predined function
    // printArray(arr1,size);

    // Vector array
    vector <int> arr = {2,4,6,8,3,1,7,9,5,0};
    sort(arr.begin(),arr.end());
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
}