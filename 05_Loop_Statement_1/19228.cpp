#include <iostream>

using namespace std;

int main(){
    int a, i = 1, sum = 0;
    cin >> a;
    while(i <= a){
        sum += i;
        i++;
    }
    cout << sum;
    return 0;
}