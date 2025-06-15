#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout << "enter a number: ";
    cin >> n;

    int i=0;
    while(i<=n){
        if(i%2==0){
            sum = sum + i;
        }
        i++;
    }
    cout << sum;
    return 0;
}