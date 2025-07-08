#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int size){
    int low = 0, high =  (size - 1);
    
    
    while (low <= high){
        
        int mid = (low + high)/2;
        
        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] > key){
            high = mid - 1;
        }
        
        // arr[mid] < key
        else{
            low = mid + 1; 
        }
    }
    return -1;
}
    
int main(){
    // cout << "Enter the key: ";
    // cin >> key1;
    
    int key1 = 4;
    int arr1[5] = {4,8,16,22,34};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << binarySearch(arr1,key1,size1) << endl;
    
    int key2 = 2;
    int arr2[2] = {1,2};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << binarySearch(arr2,key2,size2) << endl;
}