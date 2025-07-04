#include<iostream>
using namespace std;

int main(){
    int arr1[10] = {2, 3, 1, 6, 3, 6, 2};
    int ans = 0;
    for(int i = 0; i < 10; i++){
        ans = ans ^ arr1[i];
    }
    cout << ans;
}