#include <iostream>
#include <iterator>

using namespace std;

int main(){
    int a[6], price = 0;
    for (int i = 0; i < size(a); i++){
        cin >> a[i];
    }
    for (int j = 0; j < 16; j++){
        
        if (a[0] < 1) {a[0]++; price++; continue;}
        if (a[1] < 1) {a[1]++; price++; continue;}
        if (a[2] < 2) {a[2]++; price++; continue;}
        if (a[3] < 2) {a[3]++; price++; continue;}
        if (a[4] < 2) {a[4]++; price++; continue;}
        if (a[5] < 8) {a[5]++; price++;}
    }
    cout << price;
    return 0;
}