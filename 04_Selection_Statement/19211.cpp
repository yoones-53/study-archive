#include <iostream>

using namespace std;

int main() {
    int a[3], max = 0;
    for (int i = 0; i < sizeof(a)/sizeof(int); i++){
        cin >> a[i];
        if (max < a[i]) max = a[i];
    }
    cout << "max = " << max;
    return 0;
}