#include <iostream>

using namespace std;

int main(){
    int a[10], cnt_3 = 0, cnt_5 = 0;
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        cin >> a[i];
        if (a[i] % 3 == 0) cnt_3++;
        if (a[i] % 5 == 0) cnt_5++;
    }
    cout << "Multiples of 3 : " << cnt_3 << '\n';
    cout << "Multiples of 5 : " << cnt_5;
    return 0;
}