#include <iostream>

using namespace std;

int main() {
    double a;
    cin >> a;
    switch ((int)a){
        case 4: cout << "scholarship"; break;
        case 3: cout << "next semester"; break;
        case 2: cout << "seasonal semester"; break;
        default: cout << "retake";
    }
    return 0;
}