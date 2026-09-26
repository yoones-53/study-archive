#include <iostream>

using namespace std;

int main(){
    int n, a[101][3], cnt = 0;

    // 징집 인원수
    cin >> n;

    // 징집인원 프로필
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[i][j];
        }

    // 징집 불가 나이
        if ((a[i][1] < 17) || (a[i][1] > 40)||
        
        // 성별 || 18세 이하 동의서
           (a[i][0] == 2)||(a[i][1] <= 18 && a[i][2] == 0)) cnt++;
    }
    cout << cnt << "\n";

    // 징집 불가 인원 번호
    for (int k = 0; k < n; k++){
        if ((a[k][1] < 17) || (a[k][1] > 40)) cout << k+1 << " ";
        else if ((a[k][0] == 2)||(a[k][1] <= 18 && a[k][2] == 0)) cout << k+1 << " ";
    }
    
    return 0;
}