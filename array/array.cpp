#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printArray(int arr[], int size){ 
    cout << "Printing the array: ";
    for(int i = 0; i < size; i++){
        // arr[i] = i+1;
        cout << arr[i] << " ";
    }
}

int main(){
    
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    int arr1[100];
    for(int i = 0; i < size; i++){
        arr1[i] = i+1;
    }
    printArray(arr1, size);
    cout << endl;

    char ch[10] = {'a','b','c','d','e','f','g','h','i','j'};
    char ch[10];
    char ch1 = 'a';
    for(int i = 0; i < 10; i++){
        ch[i] = ch1;        
        cout << ch[i] << " ";
        ch1++;
    }
    cout << endl;

    
    // To find the size of array
    // Method 1:
    int arr1[15] = {1,2,3,4,5,6};
    int arr1size = sizeof(arr1)/sizeof(arr1[0]);
    cout << arr1size << endl;
    // Method 2: using pre-defined function
    vector<int> arr = {2,4,6,8,0,1,3,5,7,9};
    cout << arr.size() << endl;

}