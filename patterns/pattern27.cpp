#include<iostream>
using namespace std;

int main() {

    int n;
    cout << " Enter the no.: ";
    cin >> n;

    int row = 1;
    while (row <= n){

        int t1 = 1;
        while (t1 <= (n - row + 1)){

            cout << " " << t1 << " ";
            t1++;

        }

        int s2 = (row-1)*2;
        while ( s2 ){

            cout << " " << "*" << " ";
            s2--;

        }
        
        int t3 = n - row + 1;
        while (t3){

            cout << " " << t3 << " ";
            t3--;

        }
        cout << endl;
        row ++;

    }

}