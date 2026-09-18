#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if (a >= 90) cout << "Excellent";
    else if (a >= 80) cout << "Good";
    else if (a >= 70) cout << "Pass";
    else cout << "Fail";
    return 0;
}