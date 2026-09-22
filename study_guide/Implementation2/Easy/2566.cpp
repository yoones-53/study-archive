#include <iostream>

using namespace std;

int main() {
    int hour, min, timer, time;
    cin >> hour >> min >> timer;
    hour *= 60;
    time = hour + min + timer;
    time = (time > 24*60) ? time - 24*60: time;
    
    hour = time / 60;
    min = time % 60;
    cout << hour << " " << min;

    return 0;
}