#include <iostream>

using namespace std;

int main() {
    // a*b*c 입력
    int a, b, c;
    cin >> a >> b >> c;

    // int 숫자 하나하나마다 char배열에 집어넣기 진짜 어렵습니다 와 샌즈
    char mult[2000] = {(char)(a*b*c)};
    int number[10] = {0, 0, 0, 0, 0, 0 ,0, 0, 0, 0};

    // mult 숫자 순회
    for (int i = 0; i < sizeof(mult)/sizeof(mult[1]); i++){
        // mult 값과 number 일치하는지 순회
        for (int j = 0; j < sizeof(number)/sizeof(number[1]); j++){
            if ((int)mult[i] == j) number[j]++;
        }
    }

    // 0~9 출력 순회
    for (int k = 0; k < sizeof(number)/sizeof(number[1]); k++){
        cout << number[k] << "\n";
    }

    return 0;
}