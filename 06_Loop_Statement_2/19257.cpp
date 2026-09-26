#include <iostream>

using namespace std;

int main(){
    for (int l = 1; l < 6; l++){
        for (int m = 0; m < 5; m++){
            cout << l << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    
    for (int j = 0; j < 5; j++){
        for (int k = 1; k < 6; k++){
            cout << k << ' ';
        }
        cout << '\n';
    }
    return 0;
}