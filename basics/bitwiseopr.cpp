#include<iostream>
#include<bitset>
#include<cmath>
using namespace std;

int main() {

    // Bit-wise operators and its operation

    // int a = 4;
    // int b = 6; 

    // cout << " a & b: " << (a&b) << endl;
    // cout << " a | b: " << (a|b) << endl;
    // cout << " ~a: " << ~a << endl;
    // cout << " ~b: " << ~b << endl;
    // cout << " a ^ b: " << (a^b) << endl;
    // cout << " a << 2: " << (a<<2) << endl;
    // cout << " b >> 1: " << (b>>2) << endl;

    // If we want to check no. of 1 bits of any integer we can use if(n & 1)
    // int n = 10;
    // int count = 0;
    // while(n != 0){
    //     if(n & 1){
    //         count++;
    //     }
    //     n = n >> 1;
    // }
    // cout << count;

    // Print a binary representation of number using bitset
    // int n = -6;
    // cout << bitset<32>(n);  
    
    // Print Binary representation of any number 
    // int n;
    // cout << " Enter the value of n: ";
    // cin >> n;
    // int ans = 0;
    // int i = 0;
    // while(n != 0){
        //     int bit = n & 1;
        //     // reverse karne ka logic
        //     ans = (pow(10,i)*bit)+ans;
        //     i++;
        //     n = n >> 1;
        // }
        // cout << ans;
        
        // Print a binary representation of number without using bitset
        // int n;
        // cout << "Enter the value of n: ";
        // cin >> n;
        // for(int bit = 31; bit >= 0; bit--){
        //     if( n & ( 1 << bit)){
        //         cout << "1 ";
        //     }
        //     else{
        //         cout << "0 ";
        //     }
        // }

        //  Binary to Decimal
        int n;
        cout << "Enter your binary value: ";
        cin >> n;

        int i=0, ans=0;
        while (n != 0){
            int digit = n % 10;
            if(digit == 1){
                ans = pow(2,i) + ans;
            }
            n = n / 10;
            i++;
        }
        cout << ans;

    }