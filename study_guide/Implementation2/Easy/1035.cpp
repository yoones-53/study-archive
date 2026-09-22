#include <iostream>
#include <iterator>
using namespace std;

int main() {
    int a[10], max = 0, index = 0;
    for (int i = 1; i < size(a); i++) {
        cin >> a[i];
        if (max < a[i]) {
            max = a[i];
            index = i;
        }
    }
    cout << max << "\n" << index;
    return 0;
}