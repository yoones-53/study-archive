#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    switch (a){
        case 2:
        cout << 28; break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout << 31; break;
        default:
        cout << 30;
    }
    return 0;
}