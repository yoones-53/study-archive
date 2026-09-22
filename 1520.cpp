#include <iostream>

using namespace std;

int main(){
    int n, s[300] = {};
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    
    int count;
    count = s[0];
    for (int j = 0; j < n; j+=2){
        if (s[j+1] > s[j+2]) count += s[j+1];
        else count += s[j+2];
    }
    cout << count;
    return 0;
}
// max = ((n-1) > (n-2) ? (n + n-1 + n-3): (n + n-2 + n-3);