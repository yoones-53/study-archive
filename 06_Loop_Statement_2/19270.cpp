#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b, max, min;
    cin >> a >> b;
    if (a >= b){
        for(int i = a; i > b; i--){
            for (int j = 0; j < 10; j++){
                cout << i << " * " << j << " = " << setw(2) << i*j;
            }
        }
    }
    else if (a < b){
        for (int i = b; i < a; i++){
            for (int j = 0; j < 10; j++){
                cout << i << " * " << j << " = " << setw(2) << i*j;
        }
    }
}
    cout << "\n";
    return 0;
}

// a b를 입력 받고 a*9~b*9까지 구구단 for문
// 1. a b 입력
// 2. a가 클 경우 if (a > b) { / 반대는 if(a < b) {
// 2. for(int i = a; i > b; i--) / for (int i = b; i < a; i++) 