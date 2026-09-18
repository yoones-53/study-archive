#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if (a > 0) cout << "plus";
    else if (a < 0) cout << "minus";
    else cout << "zero";
    return 0;
}