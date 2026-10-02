#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    for (int i = 2; i < 5; i++){
        for (int j = 1; j < 6; j++){
            cout << i << " * " << j << " = " << setw(2) << i*j << "   ";
        }
        cout << "\n";
    }
    return 0;
}