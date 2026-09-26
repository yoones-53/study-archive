#include <iostream>

using namespace std;

int main(){
    int s = 0, l = 0, a = 0;
    while (a < 100){
        cin >> a;
        if (a < 50) s++;
        else l++;
    }
    cout << "small : " << s << '\n';
    cout << "large : " << l;
    return 0;
}