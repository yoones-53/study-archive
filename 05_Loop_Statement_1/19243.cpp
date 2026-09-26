#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double w, h;
    char answer = 'y';
    while(answer == 'Y' || answer == 'y'){
        cin >> w >> h;
        cout << "Triangle width = " << fixed << setprecision(1) << w*h/2 << '\n';
        cout << "Continue?" << ' ';
        cin >> answer;
    }
    return 0;
}