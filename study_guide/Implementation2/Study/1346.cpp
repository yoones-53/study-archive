#include <iostream>

using namespace std;

int main(){
    int a[5], b[100] = {}, sum = 0;

    for (int i = 0; i < size(a); i++){
        cin >> a[i];
        sum += a[i];
        // cout << a[i] << "\n" << "sum = " << sum << "\n";
    }
    int avg = sum / size(a);
    cout << avg << "\n";

    int temp;
    for (int j = 0; j < size(a); j++){
        for(int k = 0; k < size(a); k++){
            if (a[k] > a[k+1]){
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }
    cout << a[3];
    return 0;
}
// 중앙값 구하기
// 1. 선택 정렬
// 2. 3번 인덱스