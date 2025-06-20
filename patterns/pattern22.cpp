#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the No.: ";
    cin >> n;

    int i = 1;
    while (i <= n){

        int space = i - 1;
        while (space){
            
            cout << " " << " " << " ";
            space--;

        }
        
        int j = n - i + 1;
        while(j){

            cout << " " << i << " ";
            j--;

        }
        cout << endl;
        i++;

    }

}