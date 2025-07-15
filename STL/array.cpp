#include<iostream>
#include<array>
using namespace std;

int main(){

    // Normal way to declare array 
    int arr1[5] = {1,2,3,4,5};

    // declare array using stl
    array<int,5> arr2 {5,4,3,2,1};

    // operation on STL Array
    // 1. print value at particular index
    cout << "Element at 2nd Index: " << arr2.at(2) << endl;
    // cout << arr2[2] << endl;

    // 2. check wether the array is empty or not
    cout << "Array is Empty or Not: " << arr2.empty() << endl;
    
    // 3. Printing first and last element
    cout << "First element of the array: " << arr2.front() << endl;
    cout << "Last element of the array: " << arr2.back() << endl;

    // 4. Find the size of the array
    cout << "Size of array is: " << arr2.size() << endl;

    // 5. Printing the array is normal
    cout << "Arr2: ";
    for(int i = 0; i < arr2.size(); i++){
        cout<< arr2[i] << " ";
    }
    cout << endl;

}