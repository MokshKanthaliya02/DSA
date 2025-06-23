#include<iostream>
#include<cmath>
using namespace std;

/*

Q.7) Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1

*/


int main() {

    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    int i = 0,ans = 0;

    while(n != 0){

        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n/10; 
        
    }
    // for constrains
    if ( (ans > INT_MAX/10) || (ans < INT_MIN/10)){
        cout << 0;
    }
    else{

        cout << ans;
    }

}
