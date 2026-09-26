#include <iostream>

using namespace std;

int main(){
    int a ;
    cin >> a;
    while (a != -1){
        if (a % 3 == 0) cout << a/3 << '\n';
        cin >> a;
    }
    return 0;
}