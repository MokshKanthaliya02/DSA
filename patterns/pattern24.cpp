#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the No.:";
    cin >> n;

    int i = 1;
    while (i <= n){

        int space = i - 1;
        while (space){

            cout << " " << " " << " ";
            space--;            

        }
        int j = n - i + 1;
        int count = i;
        while (j){

            cout << " " << count << " ";
            count++;
            j--;

        }
        cout << endl;
        i++;

    }

}

