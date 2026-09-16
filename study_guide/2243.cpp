#include <iostream>

using namespace std;

int main() {
    int h, m, time;
    cin >> h >> m;

    // 시간을 분으로 변환한 총량
    time = h * 60 + m;
    time -= 45;

    // 시간이 음수로 나오면
    if (time < 0) time += 60 * 24;

    // 시/분 변환
    h = time / 60;
    m = time % 60;

    cout << h << " " << m;

    return 0;
}