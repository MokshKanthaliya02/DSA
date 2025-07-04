#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
Each element in nums appears once or twice.
*/

vector <int> findDuplicates(vector<int>& arr){
    vector <int> res;
    for(int i = 0; i < arr.size(); i++){
        int index = abs(arr[i])-1;
        if(arr[index] < 0){
            res.push_back(abs(arr[i]));
        }
        else{
            arr[index] = -arr[index];
        }
    }
    return res;
}

void printArray(const vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector <int> nums1 = {4,3,2,7,8,2,3,1};
    printArray(findDuplicates(nums1));
    vector <int> nums2 = {1,1,2};
    printArray(findDuplicates(nums2));
    vector <int> nums3 = {1};
    printArray(findDuplicates(nums3));
}