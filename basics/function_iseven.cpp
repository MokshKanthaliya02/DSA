#include<iostream>
using namespace std;

bool iseven(int n){
    // Using General Logic
    // if(n % 2 == 0)
    // Using Bitwise Operators
    if (n & 1){
        return 0;
    }
    return 1;
}

int main(){
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    bool ans = iseven(num);
    if(ans){
        cout << "Number is Even";
    }
    else{
        cout << "Number is Odd";
    }

}