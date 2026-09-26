#include <iostream>

using namespace std;

int main(){
    int score;
    cin >> score;
    while (score <= 100 && score >= 0){
        if (score >= 80) cout << "Pass";
        else cout << "Fail";
        cout << "\n";
        cin >> score;
    }
    return 0;
}