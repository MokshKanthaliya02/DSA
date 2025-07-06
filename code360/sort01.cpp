#include<iostream>
using namespace std;

void sort(int arr[], int size){
    int j = size - 1;
    for(int i = 0; i < j;){
        if(arr[i] == 1 && arr[j] == 0 ){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else if(arr[i] == 0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr1[6] = {0,1,1,0,1,0};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << size1 << endl;
    sort(arr1,size1);
    printArray(arr1,size1);

    int arr2[8] = {1,0,1,1,0,1,0,1};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << size2 << endl;
    sort(arr2,size2);
    printArray(arr2,size2);

    int arr3[5] = {0,1,0,1,0};
    int size3 = sizeof(arr3)/sizeof(arr3[0]);
    cout << size3 << endl;
    sort(arr3,size3);
    printArray(arr3,size3);
    
    int arr4[8] = {1,1,0,0,0,0,1,0};
    int size4 = sizeof(arr4)/sizeof(arr4[0]);
    cout << size4 << endl;
    sort(arr4,size4);
    printArray(arr4,size4);
}