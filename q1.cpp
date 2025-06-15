#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << " Enter a Char: ";
    cin >> ch;
    
    // To read the char literals we need to put char in single qotes eg: 'a'
    if (ch >= 'a' && ch <= 'z' ){
        cout << " The char is Lower Case" <<  endl;
    }

    else if (ch >= 'A' && ch <= 'Z'){
        cout << " The char is Upper Case" << endl;
    }
    else if (ch >= '0' && ch <= '9'){
        cout << "The char is numeric" << endl;
    }
}