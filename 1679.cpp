#include <iostream>

using namespace std;

int main(){
    int m, n, a[102] = {}, sum = -1;
    cin >> m >> n;

    for (int i = 0; i < 101; i++){
        if ((m > i * i) || (n < i * i)) continue;
        a[i] = i * i;
        sum += a[i];
        // cout << sum + 1 << "\n";
        // cout << min << ' ';
    }

    cout << sum + 1 << "\n";
    for (int j = 0; j < 102; j++){
        if (a[j] > 0) {cout << a[j]; break;}
        if (j == 101) cout << 0;
    }
    return 0;
}
// 1. 최솟값찾기
// 순회 돌면서 첫번째 완전제곱수 최솟값

// 2. 완전제곱수 찾기
// 인풋 / 인풋 = 제곱하면 완전이 되는 수
// 인풋 % 인풋 = 0 >> 무조건 0이라서 x
// 순회조건 마지막 n이 10000이면 100만큼 순회
// n /100? 만약 100보다 낮으면 성립 x
// 그냥 100만큼 순회를 돌리고 그중 맞는 숫자가 있으면 바이너리에 넣기
// 1, 4, 9
// 1*1 2*2