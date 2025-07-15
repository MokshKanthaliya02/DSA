#include<iostream>
#include<deque>
using namespace std;

int main() {

    deque<int> que;

    //1. Push element from front and back
    que.push_front(1);
    que.push_back(2);
    que.push_back(3);
    que.push_back(4);
    
    // printing the deque
    cout << "Printing the que: ";
    for(int i : que){
        cout << i << " ";
    }
    cout << endl;
    
    //2. Pop element from front and back
    // que.pop_back();
    // que.pop_front();
    
    // printing the deque
    // cout << "Printing the que: ";
    // for(int i : que){
    //     cout << i << " ";
    // }
    // cout << endl;

    // 3. Print element at particular index
    cout << "Printing element at 2nd index: " << que.at(2) << endl; 

    // 4. Printing the first and last element
    cout << "First Element: " << que.front() << endl;
    cout << "Last Element: " << que.back() << endl;
    
    // 5. Check wether the deque is empty or not
    cout << "Check wether the deque is empty or not: " << que.empty() << endl;

    // 6. size of an deque
    cout << "Size of a deque: " << que.size() << endl;
    
    // 7. Erase/delete element from the deque
    // que.erase(que.begin(), que.end() - 1);
    // cout << "Size of a deque: " << que.size() << endl;
    // // printing the deque
    // cout << "que: ";
    // for(int i : que){
    //     cout << i << " ";
    // }
    // cout << endl; 
    
    que.clear();
    cout << "Size of a deque: " << que.size() << endl;
    cout << "Check wether the que is empty: " << que.empty();
    
}