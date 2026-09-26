#include <iostream>

using namespace std;

int main(){
    int a, b, c, count;
    cin >> a >> b >> c;
    if ((c - b) > (b - a)) cout << c - b - 1;
    else cout << b - a - 1;
    return 0;
}
// 1. 초기위치
// 2. a b c, b a c, b - c 가 == 0이 아니면 b +1로 이동
// 3. b a c, a b c, a-c ==0 이 아니면 a +1로 이동
// 4. c에서 a~b로 뛰어넘는 경우의수를 고려안함...
// 무한반복