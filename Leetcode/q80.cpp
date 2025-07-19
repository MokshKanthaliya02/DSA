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
    for(int num : nums){
        if(i < 2 || num != nums[i - 2]){
            nums[i] = num;
            i++;
        }
    }
    return i;
}

int main(){
    vector<int> nums1 = {1,1,1,2,2,3};
    int result1 = removeDuplicates(nums1);
    cout << result1 << ", ";
    printArray(nums1);
    
    vector<int> nums2 = {0,0,1,1,1,1,2,3,3};
    int result2 = removeDuplicates(nums2);
    cout << result2 << ", ";
    printArray(nums2);

}