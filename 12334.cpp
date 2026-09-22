#include <iostream>

using namespace std;

int main() {
    int a[3], b[2], sum = 0, max = 0;

    // 순회하면서 최댓값 판별(인덱스 저장)
    for (int i = 0; i < 3; i++){
        cin >> a[i];
        if (a[max] < a[i]) max = i;
    }

    // 최댓값 인덱스를 제외한 나머지 수 더함
    for (int j = 0; j < 3; j++){
        if (max == j) continue;
        sum += a[j];
    }
    // 삼각형 성립조건: 최댓값 < 두 선분의 합친 길이
    if (a[max] < sum) cout << "YES";
    else cout << "NO";
    return 0;
    
}