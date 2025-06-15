#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a Number:";
    cin >> n; // taking an input

    int count=0;
    int num = 2;
    
    // Print till n
    while (count < n){
        // conditional statement true or false
        bool isprime = true;
        int i=2;

        // limit for i 
        while (i*i<=num){
            // check wether num has any factor
            if (num%i==0){
                isprime = false;
                break;
            }
            i++;
        }
        //  if is prime is true print the number 
        if (isprime){
            cout << num << ", ";
            count++; 
        }
        num++;
    }
    return 0;
}