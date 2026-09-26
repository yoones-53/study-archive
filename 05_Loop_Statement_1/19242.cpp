#include <iostream>

using namespace std;

int main(){
    int a = 1, cnt = 0;
    while (a != 0){
        cin >> a;
        if ((a % 5 == 0) || (a % 3 == 0)) continue;
        cnt++;
    }
    cout << cnt;
    return 0;
}