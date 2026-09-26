#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, cnt = 0, sum = 0;
    cin >> a;
    while (a != 0) { cnt++; sum += a; cin >> a; }
    cout << "cnt = " << cnt << '\n';
    cout << "sum = " << sum << '\n';
    cout << "avg = " << fixed << setprecision(2) << double(sum) / cnt;
    return 0;
}

// 소수점 자리 지정
// 1. ipmanip 라이브러리 호출
// 2. fixed 소수점 위치 고정
// 3. setprecision(n) 소수점 출력 지정(나머지 반올림 수행)