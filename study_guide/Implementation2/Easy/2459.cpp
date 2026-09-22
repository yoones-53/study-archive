#include <iostream>
#include <iterator>
using namespace std;

int main(){
    int a[4], b[4], total = 0, max;
    for (int i = 0; i < size(a); i++){
        cin >> a[i] >> b[i];
        total = total - a[i] + b[i];
        max = (max > total) ? max: total;
        // cout << max << " ";
    }
    cout << max;
    return 0;
}