#include<iostream>
using namespace std;

int bit(int n){
    int count = 0;
    cout << "Enter the value: ";
    cin >> n;

    while(n != 0){
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
    
}

int main(){
    int a, b, c;
    int ans = bit(a) + bit(b) + bit(c);
    cout << ans;
}