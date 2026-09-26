#include <iostream>

using namespace std;

int main(){
    int a, sum = 0;
    cin >> a;
    for (int i = a; i <= 100; i++){
        sum += i;
    }
    cout << sum;
    return 0;
}