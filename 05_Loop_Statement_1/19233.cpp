#include <iostream>

using namespace std;

int main(){
    int a, max = 0, min = 100;

    cin >> a;
    while(a != 0){
        if ((a >= 1) && (a <= 100)){
            max = (max > a) ? max: a;
            min = (min < a) ? min: a;
        };
        cin >> a;
    }
    cout << "MAX = " << max << '\n';
    cout << "MIN = " << min;
    return 0;
}