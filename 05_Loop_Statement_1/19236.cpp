#include <iostream>

using namespace std;

int main(){
    int a;
    while(1){
        cout << "1. Korea" << '\n';
        cout << "2. USA" << '\n';
        cout << "3. Japan" << '\n';
        cout << "4. China" << '\n';
        cin >> a;
        cout << "number? " << '\n';

        if (a > 4 || a < 1) {cout << "none" << '\n'; break;}
        switch(a){
            case 1: cout << "Seoul" << '\n'; break;
            case 2: cout << "Washington" << '\n'; break;
            case 3: cout << "Tokyo" << '\n'; break;
            case 4: cout << "Beijing" << '\n'; break;
        }
        cout << '\n';
    }
    return 0;
}