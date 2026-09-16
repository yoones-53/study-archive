#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "(a > b) && (a == c) : " << ((a > b) && (a == c)) << "\n";
    cout << "(a < b) || (b < c) : " << ((a < b) || (b < c)) << "\n";
    cout << "!(a == c) : " << (!(a == c));
    return 0;
}