#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid){
    int space = stalls[0];
    int cowsCount = 1;

    for(int i = 0; i < stalls.size(); i++){
        if(stalls[i] - space >= mid){
            cowsCount++;
            space = stalls[i];
            
            if(cowsCount == k ){
                return true;
            }
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k){

    // sort the array
    sort(stalls.begin(), stalls.end());

    int start = 0;
    int end = stalls[stalls.size()-1] - 1;
    int ans = -1;
    while (start <= end){
        int mid = start + (end - start)/2;
        if(isPossible(stalls,k,mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> stalls1 = {0,3,4,7,10,9};
    int k1 = 4;
    cout << "stalls1: " << aggressiveCows(stalls1,k1) << endl;
    
    vector<int> stalls2 = {1, 2, 3};
    int k2 = 2;
    cout << "stalls2: " << aggressiveCows(stalls2,k2) << endl;
    
    vector<int> stalls3 = {4,2,3,1,6};
    int k3 = 2;
    cout << "stalls3: " << aggressiveCows(stalls3,k3) << endl;

}