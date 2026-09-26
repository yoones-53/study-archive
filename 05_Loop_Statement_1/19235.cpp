#include <iostream>

using namespace std;

int main(){
    int a = 0;
    while(a != 4){
        cout << "1. Input" << '\n';
        cout << "2. Output" << '\n';
        cout << "3. Delete" << '\n';
        cout << "4. Finish" << '\n';
        cin >> a;
        cout << "Enter number: " << '\n';
        switch(a){
            case 1: cout << "You selected Input." << '\n'; break;
            case 2: cout << "You selected Output." << '\n'; break;
            case 3: cout << "You selected Delete." << '\n'; break;
            case 4: cout << "You selected Finish." << '\n'; break;
            default: cout << "Wrong input." << '\n';
        }
        cout << '\n';
    }
    return 0;
}