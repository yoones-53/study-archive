#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b, max, min;
    int sum = 0, cnt = 0;
    cin >> a >> b;
    max = (a > b) ? a: b;
    min = (a < b) ? a: b;
    // cout << sum;
    for (min; min <= max; min++){
        if(min % 3 == 0 || min % 5 == 0) {
            sum += min;
            cnt++;
        }
    }
    cout << "sum : " << sum << '\n';
    cout << "avg : " << fixed << setprecision(1) << (double)sum/cnt;
    return 0;
}