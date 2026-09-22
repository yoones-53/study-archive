#include <iostream>
#include <iterator>
#include <string>

using namespace std;

int main() {
    // a*b*c 입력
    int a, b, c;
    cin >> a >> b >> c;

    // int 숫자 하나하나마다 char배열에 집어넣기
    string mult = to_string(a*b*c);
    int number[10] = {0, 0, 0, 0, 0, 0 ,0, 0, 0, 0};

    // mult 숫자 순회
    for (int i = 0; i < mult.length(); i++){
        // mult 값과 number 일치하는지 순회
        for (int j = 0; j < size(number); j++){
            if (mult[i] - '0' == j) number[j]++;
        }
    }

    // 0~9 출력 순회
    for (int k = 0; k < size(number); k++){
        cout << number[k] << "\n";
    }

    return 0;
}