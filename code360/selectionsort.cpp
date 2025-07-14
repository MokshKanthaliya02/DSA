#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>& arr, int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void selectionSort(vector<int>& arr, int n){

    // this loop is to iterate value of i
    for(int i = 0; i < n - 1; i++){
        
        // this loop is to find min value
        for(int j = i+1; j < n; j++){
            
            // condition when to swapping values
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
}

int main(){
    
    vector<int> arr1 = {6,2,8,4,10};
    int n = arr1.size();
    selectionSort(arr1,n);
    printArray(arr1,n);

}
