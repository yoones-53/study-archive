#include <iostream>

using namespace std;

int main(){
    int a[10], cnt = 0;
    for (int i = 0; i < sizeof(a)/ sizeof(a[0]); i++){
        cin >> a[i];
        (a[i] % 2 == 0) ? cnt++: cnt;
    }
    cout << "Even numbers = " << cnt;
    return 0;
}