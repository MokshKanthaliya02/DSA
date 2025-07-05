#include<iostream>
#include<vector>
using namespace std;

vector <int> intersectionOfArrays( vector<int> &arr1, int n, vector<int> &arr2, int m ){
    vector <int> res;
    int i = 0, j = 0;
    while( i < n && j < m ){
        if(arr1[i] == arr2[j]){
            res.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return res;
}

void printArray(const vector <int> res){

    if(res.empty()){
        cout << -1;
    }

    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << endl;
}

int main(){

    vector <int> arr1= {1,2,2,2,3,4};
    vector <int> arr2= {2,2,3,3};
    printArray(intersectionOfArrays(arr1, 6, arr2, 4));
    vector <int> arr3= {1,2,3};
    vector <int> arr4= {3,4};
    printArray(intersectionOfArrays(arr3, 3, arr4, 2));
    vector <int> arr5= {1,4,5};
    vector <int> arr6= {3,4,5};
    printArray(intersectionOfArrays(arr5, 3, arr6, 3));
    vector <int> arr7= {3};
    vector <int> arr8= {6};
    printArray(intersectionOfArrays(arr7, 1, arr8, 1));
    vector <int> arr9= {1,2,2,4,5,5,9,7};
    vector <int> arr10= {1,2,3,4,5,6,7,8,9};
    printArray(intersectionOfArrays(arr9, 8, arr10, 9));
    // intersectionOfArrays(arr9, 8, arr10, 9);

}