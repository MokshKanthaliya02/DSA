#include<iostream>
#include<queue>
using namespace std;

int main(){
 
    queue<string> q1;

    // 1. Pusing element in a queue
    q1.push("One");
    q1.push("Two");
    q1.push("Three");

    // 2. Printing the first and last element in the queue
    cout << "First element: " << q1.front() << endl;
    cout << "Last element: " << q1.back() << endl;
    
    // 3. Poping the element from the queue
    q1.pop();
    cout << "First element: " << q1.front() << endl;
    cout << "Last element: " << q1.back() << endl;

    // 4. size of the queue
    cout << "Size of the queue is: " << q1.size() << endl;

    // 5. Check wether the queue is empty or not
    cout << "Wether the queue is empty: " << q1.empty() << endl;
    
}