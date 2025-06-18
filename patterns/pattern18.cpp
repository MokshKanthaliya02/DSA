#include<iostream>
using namespace std;

// // Type 1: Approch 1 pura pattern formula se nikala

// int main(){

//     int n;
//     cout << "Enter a No.: ";
//     cin >> n;

//     int i = 1;
//     while (i <= n){

//         int j = 1;
//         while (j <= i){

//             char ch = ('A' + n - i + j - 1);
//             cout << ch;
//             j++;

//         }
//         cout << endl;
//         i++;

//     }

// }

// Type 2: Approch 2 phle cararacter ko formula se nikal lo fir increment ka use kar lo

int main (){

    int n;
    cout << "Enter the No.: ";
    cin >> n;

    int i = 1;
    while (i <= n){

        int j = 1;
        char ch = ('A' + n - i);
        while ( j <= i){
            
            cout << " " << ch << " " ;
            ch++;
            j++;

        }
        cout << endl;
        i++;

    }

}