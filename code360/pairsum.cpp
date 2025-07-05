#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

vector<vector<int>> findPair( vector <int> & arr, int s){
    vector<vector <int>> res;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] + arr[j] == s){
                int first = min(arr[i],arr[j]);
                int second = max(arr[i],arr[j]);
                res.push_back({first,second});
            }
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main(){
    vector <int> arr1 = {1,2,3,4,5};
    int s1 = 5;
    vector<vector<int>> result1 = findPair(arr1, s1);
    for(auto &pair : result1){
        cout << pair[0] << " " << pair[1] << endl;
    }
    
    vector <int> arr2 = {2,-3,3,3,-2}; 
    int s2 = 0; 
    vector<vector<int>> result2 = findPair(arr2, s2);
    for(auto &pair : result2){
        cout << pair[0] << " " << pair[1] << endl;
    }
    
}