#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int i = 0;
    while (i <= n)
    {
        if(i%2!=0){
            cout << i << endl;
        }
        i++;
    }
}