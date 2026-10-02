#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    int n, x, a;
    cin >> n >> x;
    vector<int> v(n, x);
    char input;
    int temp;
    while(1){
        cin >> input;

        if (input == 'i'){
            cin >> a;
            v.push_back(a);
        }
        if (input == 'r'){
            if(v.empty()) continue;
            v.pop_back();
        }
        if (input == 's'){
            sort(v.begin(), v.end());
        }
        if(input == 't'){
            if(v.empty()) continue;
            temp = v.front();
            v.front() = v.back();
            v.back() = temp;
        }
        if(input == 'e'){
            break;
        }
    }
    for (int i = 0; i < size(v); i++){
        cout << v[i] << ' ';
    }
    return 0;
}