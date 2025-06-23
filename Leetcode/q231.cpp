#include<iostream>
#include<cmath>
using namespace std;

/*

Q.231) Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
 

Constraints:

-231 <= n <= 231 - 1

*/

// CASE 1: Using Logic
int main(){
    int n;
    cout << "Enter the Value of N: ";
    cin >> n;
    bool isdivof2 = true;
    if (n == 0){
        cout << "false";
    }
    while (n != 1){
        int m = n % 2;
        if (m != 0){
            isdivof2 = false;
        }
        n = n / 2;
    }
    if(isdivof2 == true){
        cout << "true";
    }
    else{
        cout << "false";
    }
}


// CASE 2: Using Constraints
// int main(){   
//     int n;
//     cout << "Enter the value of N: ";
//     cin >> n;
    
//     bool isdivof2 = false;
//     int ans = 1;
//     for(int i = 0; i <= 30; i++){
//         // ans = pow(2 , i); /*Brute force*/
//         if (ans == n){
//             isdivof2 = true;
//             break;
//         }
//         if (ans < INT_MAX/2)
//         ans  = ans * 2;
//     }
//     if(isdivof2 == true){
//         cout << "True";
//     }
//     else{
//         cout << "False";
//     }
// }


// CASE 3: Using Bit-Wise Operators
// int main(){
//     int n;
//     cout << "Enter the Value of N: ";
//     cin >> n;
//     // Logic behind n & (n-1). If n = 8 then n = 1000 and (n-1) = 111 by using & operatin 1000 & 111 = 0.
//     if (n > 0 && (n & (n-1)) == 0){
//       cout << "true";
//     }
//     else {
//         cout << "false";
//     }
// }

