#include <iostream>
#include <cmath>
using namespace std;

// int main() {
//     cout << "Namste Duniya" << endl;
//     return 0;
// }

int main(){

    int a = 0, b = 0;
    cout << "enter the value: ";
    cin >> a;
    cout << "enter the power: ";
    cin >> b;
    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans = ans * a;
    }
    cout << ans;

}