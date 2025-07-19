#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>& nums){
    for(int i : nums){
        cout << i << " ";
    }
    cout << endl;
}

int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for(int j = i + 1; j < nums.size(); j++){
        if(nums[i] < nums[j]){
            nums[i + 1] = nums[j];
            i++;
        }
    }
    return i + 1;
}

int main(){
    vector<int> nums1 = {1,1,2};
    int result1 = removeDuplicates(nums1);
    cout << result1 << ", ";
    printArray(nums1);
    
    vector<int> nums2 = {0,0,1,1,1,2,2,3,3,4};
    int result2 = removeDuplicates(nums2);
    cout << result2 << ", ";
    printArray(nums2);

}