#include <iostream>

using namespace std;

int main(){
    int n, k, w;
    char s[3000];
    cin >> n >> k >> s;
    
    w = n - k;
    for (int i = 0; i < sizeof(s)/sizeof(s[1]); i++){
        if (s[i] == 'R') k--;
        else if (s[i] == 'W') w--;
        else break;
    }
    if (k == 1) cout << "R";
    else cout << "W";
    return 0;
}
// 만약 R이라면 w차감, 만약 W라면 k차감.
// k과 w중 1이 남아 있는 숫자 출력