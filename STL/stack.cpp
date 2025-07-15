#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s1;

    // 1. Pushing element in a stack
    s1.push("one");
    s1.push("two");
    s1.push("three");
    // Printing the last element
    cout << s1.top() << endl;
    
    // 2. Poping element in a stack
    s1.pop();
    cout << s1.top() << endl;

    // 3. Check wether the stack is empty or not
    cout << s1.empty() << endl;

    // 4. size of the stack
    cout << s1.size() << endl;

}