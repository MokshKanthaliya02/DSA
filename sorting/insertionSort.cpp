#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> &arr, int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void insertionSort(vector<int> &arr, int n){

    // using While loop for better implemntation 
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        // To even more optimize this code even more we can add arr[j] >> temp into while loop eg: while(j>=0 && arr[j] > temp)
        while(j >= 0){
            if(arr[j] > temp){
                arr[j + 1] = arr[j];
                j--;
            }
            else{
                break;
            }
        }
        arr[j + 1] = temp;
    }

    // Using for loop
    // for(int i = 1; i < n; i++){
    //     int temp = arr[i];
    //     int j = i - 1;
    //     for(; j >= 0; j--){
    //         if(arr[j] > temp){
    //             arr[j + 1] = arr[j];
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     arr[j + 1] = temp;
    // }
}

int main(){

    vector<int> arr1 = {10,1,7,4,8,2,11};
    int n1 = arr1.size();

    insertionSort(arr1,n1);
    printArray(arr1,n1);

}