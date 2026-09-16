#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "a && b : " << (a && b) << '\n';
    cout << "a && c : " << (a && c) << '\n';
    cout << "b || c : " << (b || c) << '\n';
    cout << "!c : " << !c << '\n';
    return 0;
}