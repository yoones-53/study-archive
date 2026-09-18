#include <iostream>

using namespace std;

int main() {
    char a;
    cin >> a;
    switch (a) {
        case 'A': cout << "Excellent"; break;
        case 'B': cout << "Good"; break;
        case 'C': cout << "Usually"; break;
        default: cout << "error";
    }
    return 0;
}