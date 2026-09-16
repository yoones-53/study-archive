#include <iostream>

using namespace std;

int main() {
    int n, m, count = 1;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++){
        for(int i = 0; i < m; i++){
            cout << count++ << " ";
        }
        cout << "\n";
    }
    return 0;
}