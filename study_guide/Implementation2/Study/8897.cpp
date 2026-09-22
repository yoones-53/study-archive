#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[99];
    char b[99];

    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++){
        if (b[i] == ('X')) {cout << "EXIT"; break;}
        for (int j = 0; j < a[i]; j++) cout << b[i];
        cout << "\n";
    }
    return 0;
}