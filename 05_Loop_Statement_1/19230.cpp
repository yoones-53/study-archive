#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    while(a != 0){
        if (a > 0) cout << "positive number";
        else cout << "negative number";
        cout << "\n";
        cin >> a;
    }
    return 0;
}