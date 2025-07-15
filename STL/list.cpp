#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l1;

    // 1. Push element in the list 
    l1.push_front(2);
    l1.push_front(1);
    l1.push_back(3);
    l1.push_back(4);
    // Printing the list
    cout << "List 1: ";
    for(int i : l1){
        cout << i << " ";
    }
    cout << endl;
    
    // 2. Pop element from the list
    // l1.pop_front();
    // l1.pop_back();
    // // Printing the list
    // cout << "List 1: ";
    // for(int i : l1){
        //     cout << i << " ";
    // }
    // cout << endl;
        
    // 3. size of the list
    cout<< "Size of L1: " << l1.size() << endl;
    
    // 4. Erase the list
    // l1.erase(l1.begin());
    // cout<< "Size of L1: " << l1.size() << endl;
    // // Printing the list
    // cout << "List 1: ";
    // for(int i : l1){
    //     cout << i << " ";
    // }
    // cout << endl;

    // 5. clear the list
    // l1.clear();
    // cout<< "Size of L1: " << l1.size() << endl;

    // 6. Check wether the list is empty
    cout << "Check wether the list is empty: " << l1.empty() << endl;

    // 7. Initializing the lsit or Copy a list l1 to l2
    list<int> l2(5,5);
    // Printing the list
    cout << "List 2: ";
    for(int i : l2){
        cout << i << " ";
    }
    cout << endl;
    
    list<int> l3(l1);
    // Printing the list
    cout << "List 3: ";
    for(int i : l3){
        cout << i << " ";
    }
    cout << endl;

}