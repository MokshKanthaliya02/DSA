#include<iostream>
using namespace std;

void printCounting(int num){
    for(int i = 1; i <= num; i++){
        cout << i << ", ";
    }
}

int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    printCounting(n);
}