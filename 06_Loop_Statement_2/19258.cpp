#include <iostream>

using namespace std;

int main(){
    int sum = 2;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
                cout << j + sum << ' ';
        }
        sum++;
        cout << '\n';
    }
    return 0;
}