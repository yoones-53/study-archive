#include <iostream>
#include <iterator>

using namespace std;

int main(){
    int a, even = 0, odd = 0;
    
    for (int i = 0; i < 10; i++){
        cin >> a;
        (a % 2 == 0) ? even++: odd++;
        // if (a % 2 == 0) even++;
        // else odd++;
    }
    cout << "even : " << even << "\n" << "odd : " << odd;
    return 0;
}