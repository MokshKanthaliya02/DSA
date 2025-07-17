#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;

    while(i >= 0 && j >= 0){
        int sum = a[i] + b[j] + carry;
        carry = sum/10;
        sum %= 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i >= 0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum %= 10;
        ans.push_back(sum);
        i--;
    }

    while(j >= 0){
        int sum = a[j] + carry;
        carry = sum/10;
        sum %= 10;
        ans.push_back(sum);
        j--;
    }

    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum %= 10;
        ans.push_back(sum);
    }

    reverse(ans.begin(),ans.end());
    
    return ans;

}

void printArray(vector<int> ans){
    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v1 = {1,2,3,4};
    int nv1 = v1.size(); 
    vector<int> v2 = {6};
    int mv2 = v2.size(); 
    vector<int> ans1 = findArraySum(v1,nv1,v2,mv2);
    printArray(ans1);
    
    // vector<int> v3 = {1,2,3};
    // int nv3 = v3.size();
    // vector<int> v4 = {9,9};
    // int mv4 = v4.size();
    // vector<int> ans2 = findArraySum(v1,nv3,v2,mv4);
    // printArray(ans2);
    
    // vector<int> v5 = {4,5,1};
    // int mv5 = v5.size();
    // vector<int> v6 = {3,4,5};
    // int nv6 = v6.size();
    // vector<int> ans3 = findArraySum(v5,mv5,v6,nv6);
    // printArray(ans3);

    // vector<int> v7 = {1,1};
    // int mv7 = v7.size();
    // vector<int> v8 = {1,2};
    // int nv8 = v8.size();
    // vector<int> ans4 = findArraySum(v7,mv7,v8,nv8);
    // printArray(ans4);

}