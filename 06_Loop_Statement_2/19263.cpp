#include <iostream>

using namespace std;

int main(){
    int a, sum = 0;
    cin >> a;
    for (int i = 0; i <= a; i+=5){
        sum += i;
    }
    cout << sum;
    return 0;
}