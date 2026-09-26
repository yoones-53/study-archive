#include <iostream>

using namespace std;

int main(){
    int odd = 0, even = 0, a;
    cin >> a;
    while(a != 0){
        (a % 2 == 0) ? even++: odd++;
        cin >> a;
    }

    cout << "odd : " << odd << '\n';
    cout << "even : " << even;
    return 0;
}