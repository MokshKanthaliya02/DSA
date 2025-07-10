#include<iostream>
#include<vector>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int key){
    int start = 0, end = n - 1;
    int first = -1, last = - 1; 
    
    while (start <= end){

        int mid = start + ((end-start)/2);
        
        if(arr[mid] == key){
            first = mid;
            end = mid - 1;
        }
        else if(key < arr[mid]){
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
        
        if(arr[mid] == key){
            last = mid;
            start = mid + 1;
        }
        else if(key < arr[mid]){
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
    int n1 = arr1.size();
    int key1 = 1;

    pair<int,int> res1 = firstAndLastPosition(arr1, n1, key1);
    cout << res1.first << " " << res1.second << endl;;

    //  to calc no. of time a key is occured
    int count1 = res1.second - res1.first + 1;
    cout << count1 << endl;
    
    vector<int> arr2 = {1,2,3,3,3,3,5};
    int n2 = arr2.size();
    int key2 = 3;
    
    pair<int,int> res2 = firstAndLastPosition(arr2, n2, key2);
    cout << res2.first << " " << res2.second << endl;;
    
    //  to calc no. of time a key is occured
    int count2 = res2.second - res2.first + 1;
    cout << count2 << endl;

    vector<int> arr3 = {1,3,3,5};
    int n3 = arr3.size();
    int key3 = 3;

    pair<int, int> res3 = firstAndLastPosition(arr3,n3,key3);
    cout << res3.first << " " << res3.second << endl;
    
    //  to calc no. of time a key is occured
    int count3 = res3.second - res3.first + 1;
    cout << count3 << endl;
    
    vector<int> arr4 = {0,0,1,1,2,2,2,2};
    int n4 = arr4.size();
    int key4 = 2;

    pair<int, int> res4 = firstAndLastPosition(arr4,n4,key4);
    cout << res4.first << " " << res4.second << endl;
    
    //  to calc no. of time a key is occured
    int count4 = res4.second - res4.first + 1;
    cout << count4 << endl;

}