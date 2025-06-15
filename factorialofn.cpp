#include<iostream>
using namespace std;

int main(){
    long int n, fact=1;
    cout << "Enter a Number: ";
    cin >> n;

    int i=1;
    while(i <= n){
        fact = fact * i;
        i++;
    }
    cout << fact;
}