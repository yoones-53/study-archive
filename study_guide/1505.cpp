#include <iostream>

using namespace std;

int main() {
    //speed 변수를 추가해야 된다는 사실을 오래 생각했음.
    int n, m, accele = 0, speed = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        accele += n;
        speed += accele;
    }
    cout << speed;
    return 0;
}