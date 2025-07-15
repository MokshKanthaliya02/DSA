#include<iostream>
#include<queue>
using namespace std;

int main(){

    // Max heap
    priority_queue<int> maxpq;
    
    // Min heap
    priority_queue<int,vector<int>, greater<int>> minpq;

    // 1. pusing and poping in max and min heap
    maxpq.push(1);
    maxpq.push(6);
    maxpq.push(2);
    maxpq.push(3);
    maxpq.push(5);
    maxpq.push(4);
    cout << "Check wether the queue is empty or not: " << maxpq.empty() << endl;
    // printing the maxpq
    cout << "Size of the max priority queue: " << maxpq.size() << endl;
    int nmax = maxpq.size();
    for(int i = 0; i < nmax; i++){
        cout << maxpq.top() << " ";
        maxpq.pop();
    }
    cout << endl;
    
    minpq.push(1);
    minpq.push(6);
    minpq.push(2);
    minpq.push(3);
    minpq.push(5);
    minpq.push(4);
    cout << "Check wether the queue is empty or not: " << minpq.empty() << endl;
    // printing the maxpq
    cout << "Size of the min priority queue: " << minpq.size() << endl;
    int nmin = minpq.size();
    for(int i = 0; i < nmin; i++){
        cout << minpq.top() << " ";
        minpq.pop();
    }
    cout << endl;

    // 2. wether the queue is empty or not
    cout << "Check wether the queue is empty or not: " << maxpq.empty() << endl;
    cout << "Check wether the queue is empty or not: " << minpq.empty() << endl;
        
}