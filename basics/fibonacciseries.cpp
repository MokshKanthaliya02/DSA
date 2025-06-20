#include<iostream>
using namespace std;


int main(){

    int n;
    cout << "Enter the No.: ";
    cin >> n;

    
    int a = 0;
    int b = 1;
    cout << "Printing Fibonacci Series upto n: " << a << ", " << b << ", ";
    for(int i = 0; i <= n; i++){

        int fib = a + b;
        cout << fib << ", ";
        a = b;
        b = fib;

    }



}