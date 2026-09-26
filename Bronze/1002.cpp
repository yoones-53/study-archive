#include <iostream>

using namespace std;

int main(){
    int n, a[10000], mult = 1, min, max = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mult *= a[i];
    }
    cout << mult << ' ';

    int j = 2;
    while(1){
        if (mult % j == 0) {
            min = j;
            break;
        }
        j++;
    }

    for (int k = 0; k < n; k++){
        max *= a[k]/min;
    }
    cout << min << ' ';
    cout << max;

    return 0;
}

// 1. 최대 공약수 판별
// 전부 곱해서 2부터 나누기
// 2. 최소공배수 판별
// mult / 