#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the No.: ";
    cin >> n;

    int i = 1;
    int count = 0;
    while (i <= n){

        int j = 1;
        while(j <= i){

            char ch = ('A' + count);
            cout << " " << ch << " ";
            count++;
            j++; 

        }
        cout << endl;
        i++;

    }

}