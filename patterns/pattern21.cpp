#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a No.: ";
    cin >> n;

    /*

      * * * *
        * * *
          * *
            * 
    
    */

    int i = 1;
    while (i <= n){

        int space = 0;
        while (space <= (i-1)){

            cout << " ";
            space++;

        }
        int star = n - i + 1;
        while (star){

            cout << "*";
            star--;

        }
        cout << endl;
        i++;

    }


}