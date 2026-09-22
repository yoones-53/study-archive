#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main() {
    char n[100];
    int s;
    bool a = true;
    cin >> s;
     for (int i = 0; i < s; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < s/2; i++) {
        if(n[i] != n[(s/2)+i]){
            a = false;
            continue;
        }
    }
    if (a) cout << "Yes";
    else cout << "No";
    return 0;
}