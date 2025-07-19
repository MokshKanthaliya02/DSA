#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>& nums){
    for(int i : nums){
        cout << i << " ";
    }
    cout << endl;
}

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);
    int prefix = 1;
    for(int i = 0; i < n; i++){
        result[i] = prefix;
        prefix = prefix * nums[i];
    }
    int suffix = 1;
    for(int i = n - 1; i >= 0; i--){
        result[i] = result[i] * suffix;
        suffix = suffix * nums[i];
    }
    return result;
}

int main(){
    vector<int> nums1 = {1,2,3,4};
    vector<int> result1 = productExceptSelf(nums1);
    printArray(result1);
    
    vector<int> nums2 = {-1,1,0,-3,3};
    vector<int> result2 = productExceptSelf(nums2);
    printArray(result2);
}