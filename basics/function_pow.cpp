#include<iostream>
using namespace std;

int power(){
    int a, b;
    cout << "Enter the Number: ";
    cin >> a;
    cout << "Enter the Power: ";
    cin >> b;
    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){

    int n = 0, i = 1;
    cout << "Enter number of power to calculate: ";
    cin >> n;
    int ans = power();
    cout << "answer is: " << ans << endl;
    
}