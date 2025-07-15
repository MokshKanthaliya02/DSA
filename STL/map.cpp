#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    map<int,string> m1;   
    m1[1] = "Moksh";
    m1[4] = "Hello";
    m1[3] = "MK";
    m1[5] = "Hello";
    m1[2] = "Jain";
    // Printing the map
    for(auto i : m1){
        cout << i.first << " ";
    }
    cout << endl;
    cout << endl;
    
    unordered_map<int,string> m2;   
    m2[1] = "Moksh";
    m2[4] = "Hello";
    m2[3] = "MK";
    m2[5] = "Hello";
    m2[2] = "Jain";
    // Printing the map
    for(auto i : m2){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    
    // 1. Inserting the element into the map
    m1.insert({6,"Hii"});
    // Printing the map
    for(auto i : m1){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    
    // 2. Check wether the element is present in the map
    cout << "Is element 5 present: " << m1.count(5) << endl;;
    
    // 3. Earase element in the map
    cout << "map after erasing 5 element: ";
    m1.erase(5);
    for(auto i : m1){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    // 4. Finding element in the map
    auto it = m1.find(4);
    for(auto i = it; i != m1.end(); i++){
        cout << (*i).first << " ";
    }
    cout << endl;

    // 2. Finding element in the map
    // 2. Finding element in the map
}