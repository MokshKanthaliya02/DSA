#include<iostream>
using namespace std;

// step 1: Define the pivot
int getPivot(int* arr, int n){
    int start = 0, end = n-1;

    while(start < end){
        int mid = start + (end - start)/2;

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

// step 2: Define the binary search
int binarySearch(int* arr, int s, int e, int key){
    int start = s, end = e;
    int result = -1;

    while (start <= end){
        int mid = start + (end -start)/2;

        if(key == arr[mid]){
            result = mid;
            return result;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

// step 2: use pivot and binary search to get key
int search(int* arr, int n, int key){
    int pivot = getPivot(arr,n);

    if(key >= arr[pivot] && key <= arr[n-1]){
        return binarySearch(arr,pivot,n-1,key);
    }
    else{
        return binarySearch(arr,0,pivot-1,key);
    }
}

// print the output
int main(){
    int arr1[4] = {2,5,-3,0};
    int n1 = 4;
    int key1 = 5;
    int res1 = search(arr1,n1,key1);
    cout << res1 << endl;
    int key2 = 1;
    int res2 = search(arr1,n1,key2);
    cout << res2 << endl;
}