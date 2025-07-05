#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    sort(arr.begin(), arr.end());
    set<vector<int>> ans;
    for(int i = 0; i + 2 < n; i++){
        int target = K - arr[i];
        int left = i + 1, right = n - 1;
        while(left<right){
            int sum = arr[left] + arr[right];
            if(target == sum){
                vector<int> triplet = {arr[i],arr[left],arr[right]};
                ans.insert(triplet);
                left++;
                right--;
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }
    }
    vector<vector<int>> res(ans.begin(),ans.end());
    return res;
}

int main(){

    vector<int> arr = {1, 2, -1, 0, -2, 1};
    int K = 0;
    vector<vector<int>> triplets = findTriplets(arr, arr.size(), K);
    for (auto t : triplets) {
        for (int x : t) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;

}