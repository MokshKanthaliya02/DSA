#include<iostream>
using namespace std;

// Type 1: Using Formula

int main(){
    int n;
    cout << "Enter the no.: ";
    cin >> n;

    int i = 1;
    while (i <= n){

        int j =1;
        while (j <= n){

            char ch = ('A'+j-1);
            cout << " " << ch << " ";
            j++;

        }
        cout << endl;
        i++;

    }

}

// // Type 2: Without using formula
// int main(){
//     int n;
//     cout << "Enter the no.: ";
//     cin >> n;


//     int i = 1;
//     while(i <= n){

//         int j =1;
//         char ch = 'A';
//         while (j <= n){

//             cout << " " << ch << " ";
//             ch++;
//             j++;

//         }
//         cout << endl;
//         i++;

//     }
// }