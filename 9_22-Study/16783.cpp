#include <iostream>
#include <iterator>
using namespace std;

int main() {
    int a[6], cnt = 0;
    for (int i =0; i < size(a); i++){
        cin >> a[i];
    }
    for (int j = 0; j < 16; j++){
        if (a[0] < 1) {a[0]++; cnt++; continue;}
        if (a[1] < 1) {a[1]++; cnt++; continue;}
        if (a[2] < 2) {a[2]++; cnt++; continue;}
        if (a[3] < 2) {a[3]++; cnt++; continue;}
        if (a[4] < 2) {a[4]++; cnt++; continue;}
        if (a[5] < 8) {a[5]++; cnt++; continue;}
    }
    cout << cnt;
    return 0;
}