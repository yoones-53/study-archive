#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int paper = n*100;

    // 1. 색종이 배열 변수 생성
    int cPaperX [100], cPaperY [100];

    // 2. n만큼 색종이 객체 생성
    // 3. 색종이 위치 배열 저장
    cin >> cPaperX[0] >> cPaperY[0];
    for (int i = 1; i < n; i++){
        cin >> cPaperX[i] >> cPaperY[i];
    }
    // j번째 j+1번째 겹치는지 여부 확인 j.x-10 < j+1번째가 < j.x+10면 겹친다!
    // j번째와 j+1번째가 겹치면 
    for (int j = 0; j < n; j++) {
        if (((cPaperX[j] < cPaperX[j+1] + 10) && (cPaperX[j] > cPaperX[j+1] - 10))
        || ((cPaperY[j] + 10 < cPaperY[j+1]) && (cPaperY[j] - 10 > cPaperY[j+1]))){
        }
    }
    return 0;
}

    // 4. 색종이 영역 계산
    // 색종이 영역을 1픽셀로 쪼개서 전체 픽셀 - 겹치는 픽셀
    // n*100 - 겹치는 영역 (큰 x - 작은 x, *큰y - 큰y)
    // 색종이 좌표를 정했다 >> 색종이 x와 y의 바운더리가 정해졌다x ~ x+10 ,y ~ y+10
    // >> x[1]이 시작점 들어옴 >> x[2]가 들어오면 x[1]의 바운더리 겹치는지 비교 >> 안겹치면  
    // 열심히 구현 생각해보겠습니다..