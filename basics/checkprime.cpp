#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number:";
    cin >> n;

    if (n <= 1){
        cout << "Not Prime" << endl;
    }
    else if (n == 2){
        cout << "Prime";
    }
    else if (n%2==0){
        cout << "Not Prime";
    }

    bool isprime = true;
    int i=3;
    while(i <= n){
        if (n%i==0){
            isprime = false;
            break;
        }
        i+=2;
    }

    if(isprime){
        cout << "Prime";
    }
    else{
        cout << "Not Prime";
    }
    return 0;
}