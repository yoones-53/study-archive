#include <iostream>
#include <iterator>

using namespace std;

int main(){
    int a[10], b[100] = {}, sum = 0;

    for (int i = 0; i < size(a); i++){
        cin >> a[i];
        sum += a[i];
        // cout << a[i] << "\n" << "sum = " << sum << "\n";
    }

    int avg = sum / 10;
    cout <<  avg << "\n";
    // 최빈값 구하기 10의 배수를 순회하면서 최빈값 탐색
    for (int j = 0; j < size(a); j++){
        for (int k = 0; k < 100; k++){
            if (a[j] / 10 == k) {b[k]++; continue;}
            // cout << b[k] << " ";
        }
        // cout << '\n' << '\n';
    }
    int max = 0, count = 0;
    for (int l = 0; l < 100; l++){
        if (b[l] > count){
            count = b[l];
            max = l;
            continue;
        }
        // cout << max << ' ';
    }
    cout << max*10;
    return 0;
}