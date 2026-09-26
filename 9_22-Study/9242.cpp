#include <iostream>

using namespace std;

int main(){
    int year;
    cin >> year;
    if ((year % 4 == 0 && !(year % 100 == 0)) || (year % 400 == 0)) cout << "leap year";
    else cout << "common year";
    return 0;
}

// 4로 나누어 떨어지면서 100으로 나누어떨어지지 않는
// 400으로 나누어떨어지는