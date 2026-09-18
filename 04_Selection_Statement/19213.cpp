#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "1. ADD\n" << "2. EDIT\n" << "3. DEL\n" << "Select:\n";
    cin >> a;
    switch (a){
        case 1: cout << "You selected ADD."; break;
        case 2: cout << "You selected EDIT."; break;
        case 3: cout << "You selected DEL."; break;
        default: cout << "Wrong choice.";
    }
    return 0;
}