#include<iostream>
using namespace std;

int main(){
    int f,c;
    cout << "Enter the temp in F: ";
    cin >> f;
    
    c = (f-32)*5/9;
    cout << "Temp in C is: " << c ;

}