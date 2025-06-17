#include<iostream>
using namespace std;

// Type 1: Without Using Formula

int main() {

    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int i = 1;
    while (i <= n){

        int j =1;
        int count = i;
        while (j <= n ){
            
            char ch = ('A' + count - 1);
            cout << " " << ch << " ";
            count++;
            j++;

        }
        cout << endl;
        i++;

    }

}



// // Type 2: Using Formula

// int main(){
//     int n;
//     cout << "Enter the No.: ";
//     cin >> n;
    
//     int i = 1;
//     while (i <= n){
        
//         int j = 1;
//         while (j <= n){
//             char ch = ('A' + i + j - 2);
//             cout << " " << ch << " " ;
//             j++;
//         }
//         cout << endl;
//         i++;        

//     }

// }