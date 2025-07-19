#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>& numbers){
    for(int i : numbers){
        cout << i << " ";
    }
    cout << endl;
}

vector<int> twoSum(vector<int>& numbers, int target) {
    int start = 0;
    int end = numbers.size() - 1;
    while(start < end){
        int sum = numbers[start] + numbers[end];
        if(sum == target){
            return{start + 1, end + 1};
        }
        else if(sum < target){
            start++;
        }
        else{
            end--;
        }
    }
    return{-1,-1};
}

int main(){
    vector<int> numbers1 = {2,7,11,15};
    int target1 = 9;
    vector<int> result1 = twoSum(numbers1,target1);
    printArray(result1);
    
    vector<int> numbers2 = {2,3,4};
    int target2 = 6;
    vector<int> result2 = twoSum(numbers2,target2);
    printArray(result2);
    
    vector<int> numbers3 = {-1,0};
    int target3 = -1;
    vector<int> result3 = twoSum(numbers3,target3);
    printArray(result3);

}