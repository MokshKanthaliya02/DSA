#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    while(a != 0){
        fact = fact * a;
        a--;
    }
    return fact;
}

int nCr(){
    int n = 0, r = 0;
    cout << "Enter Value of n: ";
    cin >> n;
    cout << "Enter Value of r: ";
    cin >> r;
    int ans = factorial(n)/(factorial(r)*(factorial(n-r)));
    return ans;
}

int main(){
    
    int ans = nCr();
    cout << "Answer is: " << ans;
}