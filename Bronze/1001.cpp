#include <iostream>

using namespace std;

int main(){
    int a, b, legs, cnt;

    while (cin >> cnt >> legs){
        if ((cnt == 0) && (legs == 0)) break;

        if ((cnt > 1000) || (legs > 4000)){
            cout << "INPUT ERROR!" << '\n';
            continue;
        }
        if ((cnt * 2 > legs) || (cnt * 4 < legs) || (legs % 2 !=0)){
            cout << '0' << '\n';
            continue;
        }
        b = legs/2 - cnt;
        a = cnt - b;
        cout << b << ' ' << a << '\n';
    }
}

// 1. 입력
// 강아지 + 병아리합 and 강아지 다리수(4) + 병아리 다리수(2)
// 2. 출력
// 강아지, 병아리 각각 개체수

// ** 합과 다리수 구별법
// 1. 2의 배수와 4의 배수로 나누어져있음.

// a = 병아리, b = 강아지, legs = 총다리수
// (a + 2b = legs/2) (a+b = cnt(총개체수))
// cnt+b = legs/2
// b = legs/2-cnt

// 0의데이터를 출력하는경우
// 1. 다리수가 개체수보다 많은경우
// 개체수당 최대 4개 가능 개체수 *4보다 총다리수가 많으면 0
// 2. 개체수가 다리수보다 많은경우
// 3. 다리수가 홀수인경우
// 다리수의 최소는 2 다리수보다 개체수*2가 많으면 0