#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    for(int i = 1; i < a+1; i++){
        for(int j = 1; j < b+1; j++){
            cout << j*i << ' ';
        }
        cout << '\n';
    }
    return 0;
}