#include<iostream>
#include<algorithm>
using namespace std;

/*

Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 
Constraints:
1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000

*/



bool unique(int arr[],int size){
    int temp[2001] = {0};
    // step 1: map the values of arr into temp index(arr ki values temp ke index pe count ho rahi hai)
    /*
    eg: arr[5] = {1,2,1,3,2}

        index:     0 1 2 3 4  
        temp[5] = {0,2,2,1,0}
    */
    for(int i = 0; i < size; i++){
        temp[arr[i]+1000]++;
    }

    // step 2: sort the temp
    sort(temp,temp+2001);

    // step 3: check for duplicate in temp array
    for(int i = 0; i + 1 < 2001; i++){
        if(temp[i] != 0 && temp[i] == temp[i+1]){
            return false;
        }
    }
    return true;
}

int main(){

    int size1, size2, size3;
    cout << "Enter the size of an array1: ";
    cin >> size1;
    int arr1[100] = {1,2,2,1,1,3};
    bool ans1 = unique(arr1,size1);
    if(ans1){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    
    cout << "Enter the size of an array2: ";
    cin >> size2;
    int arr2[100] = {1,2};
    bool ans2 = unique(arr2,size2);
    if(ans2){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    
    cout << "Enter the size of an array3: ";
    cin >> size3;
    int arr3[100] = {-3,0,1,-3,1,1,1,-3,10,0};
    bool ans3 = unique(arr3,size3);
    if(ans1){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}