#include <iostream>

using namespace std;

int main() {
    int width, length, area;
    cin >> width >> length;
    width += 5;
    length *= 2;
    area = width * length;
    cout << "width = " << width << '\n';
    cout << "length = " << length << '\n';
    cout << "area = " << area << '\n';
    return 0;
}