#include <iostream>

using namespace std;

int main() {
    int n, x, y;
    cin >> n;

    cin >> x >> y;
    // x 의 최솟값과 최댓값, y의 최솟값과 최댓값 
    int x_max = x, x_min = x, y_max = y, y_min = y;
    
    // n번 입력 처리
    for (int i = 1; i < n; i++){
        cin >> x >> y;
        if (x_max < x) x_max = x;
        if (y_max < y) y_max = y;
        if (x_min > x) x_min = x;
        if (y_min > y) y_min = y;
    }
    cout << (x_max - x_min) * (y_max - y_min);
    return 0;
}