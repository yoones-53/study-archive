#include <iostream>

using namespace std;

int main(){
    for (int i = 0; i <= int('Z') - int('A'); i++){
        cout << char('A' + i);
    }
    return 0;
}