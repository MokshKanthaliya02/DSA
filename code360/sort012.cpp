#include<iostream>
using namespace std;

void sort012(int *arr, int n){
    int low = 0, mid = 0, high = (n-1);
    while(mid <= high){
        if(arr[mid] == 0){
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr1[6] = {0,1,2,2,1,0};
    int n1 = 6;
    sort012(arr1,n1);
    printArray(arr1,n1);
    
    int arr2[7] = {0,1,2,1,2,1,2};
    int n2 = 7;
    sort012(arr2,n2);
    printArray(arr2,n2);
    
    int arr3[7] = {2,2,2,1,1,1,0};
    int n3 = 7;
    sort012(arr3,n3);
    printArray(arr3,n3);

    int arr4[6] = {2,1,2,0,1,0};
    int n4 = 6;
    sort012(arr4,n4);
    printArray(arr4,n4);

}