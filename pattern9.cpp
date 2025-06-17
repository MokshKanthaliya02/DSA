#include<iostream>
using namespace std;

// Type 1: using count var
int main(){
    int n;
    cout << "Enter the no. " ;
    cin >> n;
    int i=1;
    while (i <= n){
        int j = 1;
        int count = i;
        while (j <= i){
            cout << " " << count << " ";
            count++;
            j++;        
        }
        cout << endl;
        i++;
    }
}

// // Type 2: without using count var
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the no. " ;
//     cin >> n;
//     int i=1;
//     while (i <= n){
//         int j = 1;
//         while (j <= i){
//             cout << " " << i + j - 1 << " ";
//             j++;        
//         }
//         cout << endl;
//         i++;
//     }
// }