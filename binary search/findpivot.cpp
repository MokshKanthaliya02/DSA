#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr){

    int start = 0, end = arr.size() - 1;

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

int main(){

    vector <int> arr1 = {100, -2, 6, 10, 11};
    int result = findPivot(arr1);
    cout << "Index of Pivot element: " << result;



}