#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int i=1;
    char ch = 'A';
    while(i <= n){

        int j = 1;
        while (j<=n){
            
            cout << " " << ch << " ";
            j++;
            
        }
        cout << endl;
        ch++;
        i++;
    }
}