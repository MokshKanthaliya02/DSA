#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    switch(100){
        case 100: cout << "Number of 100 Rupee note required: = " << n / 100 << endl;
            n = n % 100;
        case 50: cout << "Number of 50 Rupee note required: = " << n / 50 << endl;
            n = n % 50;
        case 20: cout << "Number of 20 Rupee note required: = " << n / 20 << endl;
            n = n % 20;
        case 1: cout << "Number of 1 Rupee coin required: = " << n / 1 << endl;
            n = n % 1;
    }
}