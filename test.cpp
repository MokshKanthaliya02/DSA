#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>& arr, int n){
    
    for (int i = 0; i < n; i++){
        
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

void insertionSort(vector<int>& arr, int n){

    for(int i = 1; i < n; i++){

        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            
            cout << "step of j " << j << " : ";
            printArray(arr,n);
            j--;
            
        }
        arr[j+1] = temp;
        cout << "step of i " << i << " : ";
        printArray(arr,n);

    }

}

int main(){
    
    vector<int> arr1 = {6,5,4,3,2,1};
    int n1 = arr1.size();

    insertionSort(arr1,n1);
    printArray(arr1,n1);

}