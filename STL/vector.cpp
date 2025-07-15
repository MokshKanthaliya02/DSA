#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    // operation on vector
    // 1. Capcity of the vector
    cout << "Capacity of the vector is: " << v.capacity() << endl;
    
    // 2. Size of the vector
    cout << "Size of the vector is: " << v.size() << endl;
    
    // 3. Push an element into the vector
    v.push_back(1);
    cout << "Printing element at 0th index: " << v[0] << endl;
    cout << "Capacity of the vector is: " << v.capacity() << endl;
    cout << "Size of the vector is: " << v.size() << endl;

    v.push_back(2);
    cout << "Printing element at 1st index: " << v[1] << endl;
    cout << "Capacity of the vector is: " << v.capacity() << endl;
    cout << "Size of the vector is: " << v.size() << endl;
    
    v.push_back(3);
    cout << "Printing element at 1st index: " << v[1] << endl;
    cout << "Capacity of the vector is: " << v.capacity() << endl;
    cout << "Size of the vector is: " << v.size() << endl;
    
    v.push_back(4);
    cout << "Printing element at 1st index: " << v[1] << endl;
    cout << "Capacity of the vector is: " << v.capacity() << endl;
    cout << "Size of the vector is: " << v.size() << endl;
    
    v.push_back(5);
    cout << "Printing element at 1st index: " << v[1] << endl;
    cout << "Capacity of the vector is: " << v.capacity() << endl;
    cout << "Size of the vector is: " << v.size() << endl;
    
    // 4. Print the first and last element of the vector
    cout << "First element of the vector: " << v.front() << endl;
    cout << "Last element of the vector: " << v.back() << endl;
    
    // Printing the vector
    cout << "vector v1: ";
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    // 5. Pop the last element of the vector    
    v.pop_back();
    
    cout << "vector v1 after pop_back: ";
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;
    
    //6. Clear a vector
    cout << "Size of the vector is: " << v.size() << endl;
    
    v.clear();
    
    cout << "Size of the vector is: " << v.size() << endl;
    
    // 7. Initialize a vector with fixed size or specific integer
    vector<int> v1(5,1);
    cout << "Vector V1: "; 
    for(int i : v1){
        cout << i << " ";
    }
    cout << endl;
    
    // 8. Copy a vector
    vector<int> v2(v1);
    cout << "Vector V2: "; 
    for(int i : v2){
        cout << i << " ";
    }
    cout << endl;
}