#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b[100], sum = 0;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> b[i];
        sum += b[i];
    }
    cout << fixed << setprecision(2) << double(sum)/a; 
    return 0;
}