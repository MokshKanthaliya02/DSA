#include<iostream>
using namespace std;

void fib(int n){
    cout << "Enter the vlue of n: ";
    cin >> n;
    int a = 0, b = 1, ans = 0;
    cout << a << ", " << b << ", ";
    for(int i = 1; i <= (n-2); i++){
        ans = a + b;
        a = b;
        b =  ans;
        cout << ans << ", ";
    }
    cout << endl;
    cout << ans;
}

int main(){
    int n;
    fib(n);
}