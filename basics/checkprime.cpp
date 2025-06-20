#include<iostream>
using namespace std;

// Method 1: Using while loop

// int main(){
//     int n;
//     cout << "Enter a Number:";
//     cin >> n;

//     if (n <= 1){
//         cout << "Not Prime" << endl;
//     }
//     else if (n == 2){
//         cout << "Prime";
//     }
//     else if (n%2==0){
//         cout << "Not Prime";
//     }

//     bool isprime = true;
//     int i=3;
//     while(i <= n){
//         if (n%i==0){
//             isprime = false;
//             break;
//         }
//         i+=2;
//     }

//     if(isprime){
//         cout << "Prime";
//     }
//     else{
//         cout << "Not Prime";
//     }
//     return 0;
// }


// Method 2: Using for loop

int main(){

    int n;
    cout << "Enter the value of n:";
    cin >> n;

    if (n <= 1){

        cout << "not prime";

    }
    else if (n % 2 == 0){

        cout << "not prime";

    }
    else{

        bool is_prime = true;
        // if not use break then check condition factors i*i
        for(int i = 3; i < n; i+=2){
        
            if ( n % i == 0){
                is_prime = false;
                break;
            }
        }
        if (is_prime == true){
            cout << "prime";
        }
        else{
            cout << "not prime";
        }
        
    }
    
}