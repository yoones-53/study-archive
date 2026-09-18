#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int min = (a < b) ? a: b;
    cout << a+b - min*2;
    return 0;
}