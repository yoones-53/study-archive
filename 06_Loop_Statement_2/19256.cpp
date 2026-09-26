#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, a[10], sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << "avg : " << fixed << setprecision(1) << double(sum)/n << '\n';
    if ((sum/n) < 80) cout << "fail";
    else cout << "pass";
}