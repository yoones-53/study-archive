#include <iostream>

using namespace std;

int main() {
    int m_height, m_weight;
    int k_height, k_weight;

    cin >> m_height >> m_weight;
    cin >> k_height >> k_weight;
    cout << ((m_height > k_height) && (m_weight > k_weight));
    return 0; 
}