#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<long long, long long>> points(n);
    for (int i = 0; i < n; i++){
        cin >> points[i].first;
        cin >> points[i].second;
    }
    sort(points.begin(), points.end());

    for (int i = 0; i < n; i++){
        cout << points[i].first * points[i].second << '\n';
    }
    return 0;
}

// int는 21억까지 표현가능