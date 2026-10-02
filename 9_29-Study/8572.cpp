#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    int n, x, temp;
    cin >> n >> x;
    vector <int> v1 (n, x);
    
    char ip; int a;
    while(1){
        cin >> ip;
        if(ip == 'i'){
            cin >> a;
            v1.push_back(a);
        }
        else if(ip == 'r'){
            if (!v1.empty()) v1.pop_back();
        }
        else if(ip == 's'){
            sort(v1.begin(), v1.end());
        }
        else if(ip == 't'){
            if(!v1.empty()){
                temp = v1[0]; // 
                v1[0] = v1[v1.size() - 1];
                v1[v1.size() - 1] = temp;
            }
        }
        else if(ip == 'e'){
            for(int i : v1){
                cout << i << ' ';
            }
            break;
        }
    }
}