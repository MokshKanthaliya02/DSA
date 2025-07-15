#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

    set<int> s1;
    unordered_set<int> s2;

    // 1. Inserting element into the set
    cout << "set1: ";
    s1.insert(5);
    s1.insert(6);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    // printing the set
    for (int i : s1){
        cout << i << " ";
    }
    cout << endl;
    
    cout << "set2: ";
    s2.insert(6);
    s2.insert(4);
    s2.insert(3);
    s2.insert(1);
    s2.insert(2);
    s2.insert(5);
    // printing the set
    for (int i : s2){
        cout << i << " ";
    }
    cout << endl;
    
    // 2. Erasing the element from the sets
    // set<int>::iterator it = s1.begin();
    // advance(it, 3);
    // s1.erase(it);
    // s1.erase(s1.begin());
    // s1.erase(--s1.end());
    // for (int i : s1){
    // // printing the set
    //     cout << i << " ";
    // }
    // cout << endl;

    // 3. size of the set
    cout << "size of the set: " << s1.size() << endl;

    // 4. Weteher the element is present in set or not
    cout << "Count of the set: " << s1.count(1) << endl;

    // 5. Find the element in the set
    set<int>::iterator itr = s1.find(5);

    for(auto it = itr; it != s1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // 6. find the set is empty or not
    cout << s1.empty() << endl;
    s1.clear();
    cout << s1.empty() << endl;
    
}