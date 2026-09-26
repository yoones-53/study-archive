#include <iostream>

using namespace std;

int main(){
    int num, sum = 0;
    for (num = 1; num < 11; ++num){
        sum += num;
    }

    cout << "sum = " << sum << '\n';
    cout << "num = " << num;
    return 0;
}