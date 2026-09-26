#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, sum = 0, cnt = 0;
    while(1){
        cin >> a;
        if (a > 100 || a < 0) break;
        sum += a;
        cnt++;
    }
    cout << "sum : " << sum << '\n';
    cout << "avg : " << fixed << setprecision(1) << double(sum)/cnt;
    return 0;
}