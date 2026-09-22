#include <iostream>

using namespace std;

int main() {
    int y, c, p, count = 0;
    cin >> y >> c >> p;
    
    while (1){
        if (y <= 0 || c <= 1 || p <= 0) break;
        y--;
        c--;
        p--;
        c--;
        count++;
    }
        cout << count;
    return 0;
}