#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout << "Enter a number: ";
    cin >> n;

    int i = 0;
    while(i<=n){
        sum= i + sum;
        i++;
    }
    cout << sum;
}
