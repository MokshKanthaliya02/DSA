#include<iostream>
using namespace std;

bool isPresent(int arr[], int size, int n){
    for(int i = 0; i < size; i++){
        if(arr[i] == n){
            return 1;
        }
    }
    return 0;    
}

int main(){

    int size, n;
    cout << "Enter the size of an array: ";
    cin >> size;
    cout << "Enter the value of N: ";
    cin >> n;

    int arr1[10] = {2,4,6,15,-20,-15,6,9,4,1};
    // cout << "True or false: " << isPresent(arr1, size, n); 
    bool found = isPresent(arr1, size, n);
    if(found){
        cout << "The value has been found";
    }
    else{
        cout << "The value is not found";
    }
}