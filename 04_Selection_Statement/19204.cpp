#include <iostream>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int o = w + 100 - h;
    cout << o << "\n";
    if (o > 0) cout << "Obesity\n" << "Need control"; 
    return 0;
}