#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid){
    
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < n;i++){

        if(pageSum + arr[i] <= mid){
            pageSum+=arr[i];
        }
        else{

            studentCount++;
            if(studentCount > m || mid < arr[i]){
                return false;
            }
            pageSum = arr[i];

        }

    }
    return true;    

}

int findPages(vector<int>& arr, int n, int m){

    if(m > n){
        return -1;
    }

    int start = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    int ans = -1;
    int end = sum;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){

    vector <int> arr1 = {12,34,67,90};
    int m1 = 2;
    int n1 = arr1.size();
    cout << "minimum pages of case 1 = " << findPages(arr1,n1,m1) << endl;

    vector <int> arr2 = {25,46,28,49,24};
    int m2 = 4;
    int n2 = arr2.size();
    cout << "minimum pages of case 2 = " << findPages(arr2,n2,m2) << endl;
    
    vector <int> arr3 = {2,8,8,4,5};
    int m3 = 6;
    int n3 = arr3.size();
    cout << "minimum pages of case 2 = " << findPages(arr3,n3,m3) << endl;

}