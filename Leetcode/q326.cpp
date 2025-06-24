#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

/*

Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.

 

Example 1:

Input: n = 27
Output: true
Explanation: 27 = 33
Example 2:

Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.
Example 3:

Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1).
 

Constraints:

-231 <= n <= 231 - 1

*/


// CASE 1: Using Genral Logic
int main (){
    int n;
    cout << " Enter the value of N: ";
    cin >> n;
    if (n <= 0){
        return false;
    }    
    bool isdivof3 = true;
    while(n != 1){
        int div = n % 3;
        if (div = 0){
            isdivof3 = false;
        }
        n = n / 3;
    }
    if (isdivof3 == true){
        cout << "true";
    }
    else{
        cout << "false";
    }
    
}

// CASE 2: Using Limits
// int main(){

    // Find the max limit of ans from power of x or "Clean way is to google it directly" or find the iteration and calculate it through calculator
    // long long A = 1;
    // int i = 0;
    // while (A * 3 < INT_MAX){
    //     A = A * 3;
    //     i++;
    // }
    // cout << A;

    // int n;
    // cout << " Enter the value of N: ";
    // cin >> n;
    // to find is div of 3
    // if (n > 0 && 1162261467 % n == 0){
    //     cout << "true";
    // }
    // else{
    //     cout << "false";
    // }    
// }
