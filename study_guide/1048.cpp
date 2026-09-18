#include <iostream>

using namespace std;

int main() {
    int a, fac, count = 0;
    cin >> a;
    fac = a;
    while (a != 1)
    {
        if (a % 5 == 0) count++;
        a--;
        fac *= a;
    }
    cout << count;
    
    return 0;
}
// n! / (n-1)! = n
// n! = n * n-1 * n-2 *...*1
// n-1! = n-1 * n-2 *...* 1
// n! = n *(n-1)!
// n= 1 종료조건