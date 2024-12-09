#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;

int main() {
    vector <bool> v(MAX + 1, true);
    v[0] = v[1] = false;
    for (int i = 2; i*i <= MAX; ++i) {
        for (int j = 2; i*j <= MAX; ++j) v[i*j] = false;
    }
    
    int n;
    while (cin >> n) {
        if (v[n]) cout << n << " es primer" << endl;
        else cout << n << " no es primer" << endl;
    }
}