#include <iostream>

using namespace std;

int main(){
    for (int i = 0; i < 'Z' - 'A' + 1; i++){
        cout << char(int('A') + i);
    }
    return 0;
}