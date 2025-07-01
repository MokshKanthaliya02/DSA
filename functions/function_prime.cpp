#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return 0;
    }
    for(int i = 3; i < num; i++){
        int mod = num % i;
        if(mod == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    bool ans = isPrime(n);
    if(ans){
        cout << "The number is Prime";
    }
    else{
        cout << "The number is Not Prime";
    }
}