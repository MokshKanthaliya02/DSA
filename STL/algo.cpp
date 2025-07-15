#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(5);
    v1.push_back(17);
    v1.push_back(13);
    v1.push_back(6);

    cout << "Finding 5: " << binary_search(v1.begin(),v1.end(),5) << endl;
    cout << "Finding 15: " << binary_search(v1.begin(),v1.end(),15) << endl;

    cout << "Lower Bound: " << lower_bound(v1.begin(),v1.end(),5) - v1.begin() << endl;
    cout << "Upper Bound: " << upper_bound(v1.begin(),v1.end(),5) - v1.begin() << endl;

    cout << "max of v1: " << *max(v1.begin(),v1.end()) << endl;
    cout << "min of v1: " << *min(v1.begin(),v1.end()) << endl;

    cout << "Vector after sorting: ";
    sort(v1.begin(),v1.end());
    for(int i : v1){
        cout << i << " ";
    }
    cout << endl;
    
    cout << "vector after rotating: ";
    rotate(v1.begin(), v1.begin()+2, v1.end());
    for(int i : v1){
        cout << i << " ";
    }
    cout << endl;

    int a = 3;
    int b = 6;
    cout << "max of a,b: " << max(a,b) << endl;
    cout << "max of a,b: " << min(a,b) << endl;
    
    swap(a,b);
    cout << "Swapping a,b a = " << a << ", b = " << b << endl;

    string s1 = "abcd";
    reverse(s1.begin(),s1.end());
    cout << "Reversed string: " << s1 << endl;



}