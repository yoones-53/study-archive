#include <iostream>

using namespace std;

int main() {
    int vd, a, b, c, d;
    cin >> vd >> a >> b >> c >> d;
    int x = b/d;
    if (b % d == 0);
    else x++;
    int y = a/c;
    if (a % c == 0);
    else y++;
    int max = (x > y) ? x: y;
    cout << vd - max;
    return 0;
}