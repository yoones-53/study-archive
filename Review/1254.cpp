#include <iostream>

using namespace std;

int main(){
    // 항공표 입력
    char a[6][6];
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            cin >> a[i][j];
            // cout << a[i][j] << ' ';
        }
        // cout << '\n';
    }
    
    // 여행 경로 개수 입력
    int n;
    cin >> n;
    // cout << n;
    
    // 여행 경로 입력
    char b[10][5];
    for (int k = 0; k < n; k++){
        for (int l = 0; l < 5; l++){
            cin >> b[k][l];
            // cout << b[k][l] << " ";
        }
        // cout << '\n';
    }
    
    // 여행 경로[n번][n+1번] == '0'이면 "NO"
    int cnt;
    for (int m = 0; m < n; m++){
        cnt = 0;
        for (int o = 0; o < 4; o++){
            if (a[b[m][o] - 'A'][b[m][o+1] - 'A'] == '0'){
                cout << "NO"; break;
            }
            ++cnt;
            // cout << cnt << ' ';
            if (cnt == 4) cout << "YES";
        }
        cout << "\n";
    }
    
    return 0;
}

// 1. 항공표 저장
// 2. 여행경로 개수 저장
// 3. 여행경로 저장
// 4-1. (여행경로의 인덱스와 다음 여행경로 인덱스)가 0이면 "NO"출력후 다음 여행경로로 넘어가기
// 4-2. 반복문 한 번 돌때마다 cnt + 1, cnt == 4이면 "YES" 출력후 다음 여행경로로 넘어가기

// 항공표를 항공경로가 아닌 항공티켓이라고 받아들여서 문제풀이 너무 오래걸림
// 항공표와 여행경로 인덱스를 0 or 1로 맞추기 위해 (여행경로[][] - 'A')과정이 필요했음
// 항공표가 숫자여도 char로 저장하여서 '0' or '1'처리 잘 해주어야됌.

// 브론즈 4보다 조금 어려운듯.