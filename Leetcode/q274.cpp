#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int hIndex(vector<int>& citations) {

    sort(citations.begin(),citations.end(), greater<int>());

    for(int i = 0; i < citations.size(); i++){

        if(citations[i] < i + 1){
            return i;
        }

    }
    return citations.size();
}

int main(){
    vector<int> citations1 = {3,0,6,1,5};
    int result1 = hIndex(citations1);
    cout << result1 << endl;
    
    vector<int> citations2 = {1,3,1};
    int result2 = hIndex(citations2);
    cout << result2 << endl;

}