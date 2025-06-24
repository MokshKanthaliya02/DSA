#include<iostream>
using namespace std;

int main(){
    int a, b;
    char ch;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the Operation: ";
    cin >> ch;
    cout << "Enter the value of b: ";
    cin >> b;
    switch (ch){
    case '+': cout << "Sum of A + B = " << a + b << endl;
        break;
    case '-': cout << "Sum of A - B = " << a - b << endl;
        break;
    case '*': cout << "Sum of A * B = " << a * b << endl;
        break;
    case '/': cout << "Sum of A / B = " << a / b << endl;
        break;
    case '%': cout << "Sum of A % B = " << a % b << endl;
        break;
    default: cout << "enter the valid operation" << endl;
        break;
    }
}