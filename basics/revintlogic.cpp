#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // reverse of any number modulus and division
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int i = 0;
    while ( n != 0){
        int m = n%10;
        cout << m;
        n = n/10;
    }
}