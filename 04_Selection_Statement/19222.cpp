#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    switch (a){
        case 1: cout << "dog"; break;
        case 2: cout << "cat"; break;
        case 3: cout << "chick"; break;
        default: cout << "blank"; break;
    }
    return 0;
}