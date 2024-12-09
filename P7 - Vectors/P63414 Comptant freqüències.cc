#include <iostream>
using namespace std;
#include <vector>

int main () {
    const int NUM = 1000000000;
    int n;
    cin >> n;
    
    vector<int> v(1001,0);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++v[x - NUM];
    }

  
    for (int i = 0; i < 1001; ++i) {
        if (v[i] != 0) cout << NUM + i << " : " << v[i] << endl;
    }
}