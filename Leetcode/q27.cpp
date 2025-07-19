#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>& nums){
    for(int i : nums){
        cout << i << " ";
    }
    cout << endl;
}

int removeElement(vector<int>& nums, int val) {
    int i = 0;
    for(int j = 0; j < nums.size(); j++){
        if(nums[j] != val){
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

int main(){

    vector<int> nums1 = {3,2,2,3};
    int val1 = 3;
    int result1 = removeElement(nums1,val1);
    cout << result1 << ", ";
    printArray(nums1);

    vector<int> nums2 = {0,1,2,2,3,0,4,2};
    int val2 = 2;
    int result2 = removeElement(nums2,val2);
    cout << result2 << ", ";
    printArray(nums2);

}