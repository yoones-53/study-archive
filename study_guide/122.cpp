#include <iostream>

using namespace std;

int main() {
    int year;
    cin >> year;
    // 4로 나누어 떨어지는값 중에서 100으로 나누어떨어지는 값을 거른 값 윤년
    if ((year % 4 == 0) && !(year % 100 == 0)) cout << "leap year";
    // 400으로 나누어떨어지는 값 윤년
    else if (year % 400 == 0) cout << "leap year";
    // 나머지 평년
    else cout << "common year";
    return 0;
}

/* 이렇게 표현도 가능
 * if ((year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0) cout << "leap year";
 * else cout << "common year";
 */