#include<iostream>
using namespace std;

// General Approch
// void maxValue(int arr[], int size){
//         int ans = arr[0];
//         for(int i = 0; i < size; i++){
//         // predefined function ans = max(ans, arr[i])
//         ans = max(ans, arr[i]);
//         // if(ans <= arr[i]){
//             //     ans = arr[i];
//             // }
//         }
//         cout << "Max Value is: " << ans << endl;
//     }
//     void minValue(int arr[], int size){
//         int ans = arr[0];
//         for(int i = 0; i < size; i++){
//         // predefined function ans = min(ans, arr[i])
//         ans = min(ans, arr[i]);
//         // if(ans >= arr[i]){
//         //     ans = arr[i];
//         // }
//     }
//     cout << "Min Value is: "<< ans << endl;
// }

int getMax(int arr[], int size){
    int max = INT_MIN;
    // cout << max;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int size){
    int min = INT_MAX;
    // cout << min;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout << "Enter the value of size: ";
    cin >> size;

    int arr1[100] = {10,20,50,60,5};
    // maxValue(arr1, size);
    // minValue(arr1, size);
    cout << "Max Value is: " << getMax(arr1, size) << endl;
    cout << "Min Value is: " << getMin(arr1, size) << endl;;
}