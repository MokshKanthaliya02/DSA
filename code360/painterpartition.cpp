#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &boards, int k, int mid){
    int board = 0;
    int painter = 1;
    for(int i = 0; i < boards.size(); i++){
        // check wether the mid is valid solution
        if(board + boards[i] <= mid){
            board+=boards[i];
        }
        else{
            painter++;
            /*for false two condition 
            i) wether the count of painter exceed k
            ii) wether the time to paint board exceed mid */
            if(painter > k || boards[i] > mid){
                return false;
            }
            board = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k){
    
    int start = 0;
    int end;
    for(int i = 0; i < boards.size(); i++){
        // end = sum of first to last element in array
        end += boards[i];
    }

    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;
        // if valid solution then store it into ans and move end to left
        if(isPossible(boards,k,mid)){
            ans = mid;
            end = mid - 1;
        }
        // if not valid solution then move start to right 
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> boards1 = {10, 20, 30, 40};
    int k1 = 2;
    cout << "boards1: " << findLargestMinDistance(boards1,k1) << endl;

    vector<int> boards2 = {48, 90};
    int k2 = 2;
    cout << "boards2: " << findLargestMinDistance(boards2,k2) << endl;
    
    vector<int> boards3 = {2, 1, 5, 6, 2, 3};
    int k3 = 2;
    cout << "boards3: " << findLargestMinDistance(boards3,k3) << endl;    
}