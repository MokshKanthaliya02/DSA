#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr , int m) {
    int start = m + 1, end = arr.size() - 1;
    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }    
}

void printArray(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;    
}

int main(){
    vector <int> arr1 = {1,2,3,4,5,6};
    int m1 = 3;
    reverseArray(arr1, m1);
    printArray(arr1);
    
    vector <int> arr2 = {10,9,8,7,6};
    int m2 = 2;
    reverseArray(arr2, m2);
    printArray(arr2);
    
    vector <int> arr3 = {1,4,5,6,6,7,7};
    int m3 = 3;
    reverseArray(arr3, m3);
    printArray(arr3);
    
    vector <int> arr4 = {10,4,5,2,3,6,1,3,6};
    int m4 = 3;
    reverseArray(arr4, m4);
    printArray(arr4);
}