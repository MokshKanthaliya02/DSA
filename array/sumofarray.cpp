#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr1[10] = {25,35,45};
    cout << "Sum = " << sumOfArray(arr1,size);
    
}