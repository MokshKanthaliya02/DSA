#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 
Follow up:

Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
Could you do it in-place with O(1) extra space?
*/

void rotate(vector<int>& nums, int k) {
    
    // Solution with extra vector
    // vector<int> temp(nums.size());
    // for(int i = 0; i < nums.size(); i++){
    //     temp[(i+k) % nums.size()] = nums[i];
    // }
    // nums = temp;
    
    // Solution without extra vector
    int n = nums.size();
    k %= n;  // Handle cases where k > n

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    
}

void printArray(vector<int>& nums){
    for(int i : nums){
        cout << i << " ";
    }
    cout << endl;
}

int main(){

    vector<int> nums1 = {1,2,3,4,5,6,7};
    int k1 = 3;
    rotate(nums1,k1);
    printArray(nums1);

    vector<int> nums2 = {-1,-100,3,99};
    int k2 = 2;
    rotate(nums2,k2);
    printArray(nums2);

}