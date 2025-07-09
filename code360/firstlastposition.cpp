#include<iostream>
#include<vector>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k){
    int start = 0, end = n - 1;
    int first = -1, last = - 1; 
    
    while (start <= end){

        int mid = start + ((end-start)/2);
        
        if(arr[mid] == k){
            first = mid;
            end = mid - 1;
        }
        else if(k < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        } 
    }

    start = 0;
    end = n-1;

    while (start <= end){

        int mid = start + ((end-start)/2);
        
        if(arr[mid] == k){
            last = mid;
            start = mid + 1;
        }
        else if(k < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        } 
    }

    pair <int,int> res = {first,last};
    return res;
     
}

int main(){

    vector<int> arr1 = {0,1,1,5};
    int n = arr1.size();
    int k = 1;
    pair<int,int> res = firstAndLastPosition(arr1, n, k);
    cout << res.first << " " << res.second;

}