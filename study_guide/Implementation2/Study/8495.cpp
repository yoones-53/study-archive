#include <iostream>

using namespace std;

int main() {
    int n, k;
    // 문자열+1 인덱스에 시간 좀 많이 씀 (EOF까지)
    char c[200];
    cin >> n >> k >> c;
    // k인덱스 부터 유니코드값 + (대문자 - 소문자)
    for (int i = 0; n > i; i++){
        // k인덱스부터
        if (i >= k-1) {
            // 현재 인덱스가 소문자면
            if (c[i] > (int)'Z')
            cout << char((int)c[i] - ((int)'a'-(int)'A'));
            // 현재 인덱스가 대문자면
            else cout << char((int)c[i] + ((int)'a'-(int)'A'));
        }
        else cout << c[i];
    }
    return 0;
}