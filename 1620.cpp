#include <iostream>
#include <iterator>

using namespace std;

int main(){
    char num[100] = {};
    int arr[100] = {}, a, b, last;
    cin >> num;
    for (int i = 0; i < size(num); i++){
        // cout << num[i];
        if (num[i] == '-'){
            for (int j = 0; j < size(arr); j++){
                if (arr[j] != 0) continue; 
                arr[j] = i; 
                cout << arr[j] << ' ';
                last = j;
                break;
            }
        }
    }
    // '-' 인덱스들 저장
    // '-'~'-' 인덱스들 배열에 int값 저장
    cin >> a >> b;

    for (int k = 0; k <= last; k++){
    }
    // a+1번째 '-' ~ a번째 '-'값 저장
    // b번째 '-' ~ b+1
    
    return 0;
}

// 생각을 바꾸기
// '-' a번 나오면 '-'~'-'사이
// '-' b번 나오면 '-'~'-'사이


// # - 구분
// 1. 배열 생성
// 2. 번호 문자 순회
// 3. -가 나오면 그 전의 인덱스까지 배열에 저장
// 4. 문자열 끝까지 계속 반복

// # 덧셈
// 배열속 a, b인덱스 덧셈 수행후 출력