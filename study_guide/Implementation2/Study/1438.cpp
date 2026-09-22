#include <iostream>

using namespace std;

int main() {
    // 도화지 배열
    int n, paper[100][100] = {};
    cin >> n;
    // 색종이 좌표
    int x, y;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        for (int j = x; j < x + 10; j++){
            for (int k = y; k < y + 10; k++) paper[j][k] = 1;
        }
    }

    int area = 0;
    for (int l = 0; l < 100; l++){
        for (int m = 0; m < 100; m++){
            if (paper[l][m] == 1) area++;
        }
    }
    cout << area;
    return 0;
}










// 방법 2. 색종이의 넓이(n*100)에서 겹치는 영역을 뺀다. (이건 아닌듯..)
// int main() {
//     int n, x, y;
//     cin >> n;

//     int paper = n*100;
//     int cPaper[100][2];

//     // 1. 배열 생성 x[i][0],x[i][1] ((x1,y1),(x2,y2),(x3,y3))
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x >> y;
//         cPaper[i][0] = x;
//         cPaper[i][1] = y;
//     }
//     // 2. if(x1 < x2 && x1 + 10 > x2)= x겹침 && if(y1 < y2 && y1 + 10 > y2) = y겹침
//     // 근데 1번인덱스와 3번인덱스가 겹치면? 4번인덱스가 
//     for (int j = 1; j < n; j++){
//         if ((cPaper[j-1][0] < cPaper[j][0] && cPaper[j-1][0] + 10 > cPaper[j][0])
//         && (cPaper[j-1][1] < cPaper[j][1] && cPaper[j-1][1] + 10 > cPaper[j][1]))
//     // 3. paper - (x2 - x1) * (y2 - y1)
//         paper -= (cPaper[j-1][0] - cPaper[j][0]) * (cPaper[j-1][1] - cPaper[j][1]);
//     }
//     cout << paper;
//     return 0;
// }

    // 4. 색종이 영역 계산
    // 색종이 영역을 1픽셀로 쪼개서 전체 픽셀 - 겹치는 픽셀
    // n*100 - 겹치는 영역 (큰 x - 작은 x, *큰y - 큰y)
    // 색종이 좌표를 정했다 >> 색종이 x와 y의 바운더리가 정해졌다x ~ x+10 ,y ~ y+10
    // >> x[1]이 시작점 들어옴 >> x[2]가 들어오면 x[1]의 바운더리 겹치는지 비교 >> 안겹치면  

    // 방법 1. 최소 x,y~ 최대 x,y의 넓이를 구해서 흰색 영역을 뺀다.
    // 방법 2. 색종이의 넓이(n*100)에서 겹치는 영역(이걸 못구하겠음...)을 뺀다.

    // 2차원 배열 사용? 1. 배열 생성 x[i,j] ((x1,y1),(x2,y2),(x3,y3))
    // 2. if(x1 < x2 && x1 + 10 > x2)= x겹침 && if(y1 < y2 && y1 + 10 > y2) = y겹침
    // 3. n - (x2 - x1) * (y2 - y1)
    // 4. cout << n;