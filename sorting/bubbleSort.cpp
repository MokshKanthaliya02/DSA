#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n){

    for(int i = 1; i < n; i++){

        // j < n - 1 - i if i want i to start from 0
        for(int j = 0; j < n - i; j++){

            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }

    }

}

void printArray(vector<int>& arr, int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int main(){

    vector<int> arr1 = {6,2,8,4,10};
    int n1 = arr1.size();

    bubbleSort(arr1,n1);
    printArray(arr1,n1);

}