#include<iostream>
using namespace std;

int mySqrt(int x) {
    
    int start = 0,end = x;
    long long int mid = 0;
    long long int ans = -1;
    
    while(start <= end){

        long long mid = start + (end-start)/2;

        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid > x){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;

}

double morePrecision(int x, int digits, int tempSol){
    
    double factor = 1;
    
    double ans = tempSol;

    for(int i = 0; i < digits; i++){

        factor = factor/10;

        for(double j = ans; j*j < x; j = j + factor){          

            ans = j;

        }

    }
    return ans;

}

int main(){

    int x;
    cout << "Enter the number: ";
    cin >> x;

    int tempSol = mySqrt(x);
    cout << "answer is: " << morePrecision(x,4,tempSol);

}