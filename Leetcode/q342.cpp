#include<iostream>
using namespace std;


/*

q.342) Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.

Example 1:

Input: n = 16
Output: true
Example 2:

Input: n = 5
Output: false
Example 3:

Input: n = 1
Output: true
 
Constraints: -231 <= n <= 231 - 1

*/
int main(){

    int n;
    cout << "Enter the Value of N: ";
    cin >> n;
    
    if (n = 0){
        cout << "False";
    }

    bool isdivof4 = false;
    while (n != 1){
        int bit = n % 4;
        if (bit == 0){
            isdivof4 = true;
        }
        n = n / 4;
    }
    if(isdivof4  == true){
        cout << "true";
    }
    else{
        cout << "false";
    }
}
