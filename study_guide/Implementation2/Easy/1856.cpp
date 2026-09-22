#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a = 0;
    // 높이 n
    for (int k = 0; k < n; k++) {
        
        // 홀수행 순회
        if (k % 2 == 0) {
            for (int i = 0; i < m; i++){
                a++;
                cout << a << " ";
            }
        }

        // 짝수행 순회
        else {
            a += m;
            for (int j = 0; j < m; j++){
                cout << a << " ";
                a--;
            }
            a += m;
        }
        cout << "\n";
    }
    return 0;
}