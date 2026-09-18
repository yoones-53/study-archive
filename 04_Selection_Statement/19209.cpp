#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if ((a < 4) && (b < 4)) cout << "LOSE.";
    else if ((a >= 4) && (b >= 4)) cout << "WIN.";
    else cout << "DRAW.";

    return 0; 
}