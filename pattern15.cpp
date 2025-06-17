#include<iostream>
using namespace std;

// Type 1: Without Using Formula

/* Home-work*/

// Type 2: Using Formula

int main(){

    int n;
    cout << "Enter the no.: ";
    cin >> n;

    int i = 1;
    while (i <= n) {

        int j =  1;
        while (j <= i){

            char ch = ('A' + i - 1);
            cout << " " << ch << " ";
            j++;

        }
        cout << endl;
        i++;

    }

}