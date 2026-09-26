#include <iostream>

using namespace std;

int main(){
    int a[100] = {}, max = 0, n;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        max = (max > a[i]) ? max: a[i];
    }
    cout << max;
    return 0;
}