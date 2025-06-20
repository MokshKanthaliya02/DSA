#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the No.: ";
    cin >> n;

    int i = 1;
    while(i <= n){

        int space = n - i;
        while(space){

            cout << " " << " " << " ";
            space--;

        }

        int j = 1;
        while(j <= i){

            cout << " " << j << " ";
            j++;
            
        }
        int count = i - 1;
        while(count){

            cout << " " << count << " ";
            count--;

        }
        cout << endl;
        i++; 
    }

}