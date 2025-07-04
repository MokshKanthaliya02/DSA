#include<iostream>
#include<algorithm>
using namespace std;

int duplicate(int arr[], int size){
    // int size = sizeof(arr)/sizeof(arr[0]);
    int ans = 0;
    sort(arr, arr+size);
    for(int i = 0; i+1 < size; i++){
        if(arr[i] == arr[i+1]){
            ans = arr[i];
            break;
        }
    }
    return ans;
}

int main(){
    
    int arr1[3] = {1,1,2};
    int size1 = 3;
    cout << duplicate(arr1, size1) << endl;
    int arr2[5] = {1,3,4,2,2};
    int size2 = 5;
    cout << duplicate(arr2, size2) << endl;
    int arr3[5] = {3,1,3,4,2};
    int size3 = 5;
    cout << duplicate(arr3, size3) << endl;
    int arr4[3] = {1,1,1};
    int size4 = 3;
    cout << duplicate(arr4, size4) << endl;
}
