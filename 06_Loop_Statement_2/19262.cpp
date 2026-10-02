#include <iostream>

using namespace std;

int main(){
    int a, b, max, min;
    cin >> a >> b;
    if (a-b > 0) max = a;
    else max = b;
    if (a-b < 0) min = a;
    else min = b;
    for (int i = min; i <= max; i++){
        cout << i << ' ';
    }
    return 0;
}