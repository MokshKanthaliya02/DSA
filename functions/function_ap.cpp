#include<iostream>
using namespace std;

int ap(){
    int n, a, d;
    cout << "Enter the nth term: ";
    cin >> n;
    cout << "Enter the first term of A.P: ";
    cin >> a;
    cout << "Enter the common difference: ";
    cin >> d;
    int ans = (a * n) + d;
    return ans; 
}

int main(){

    int ans = ap();
    cout << ans;

}