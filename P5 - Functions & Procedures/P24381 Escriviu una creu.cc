#include <iostream>
using namespace std;
#include <string>

void cross(int n, char c) {
    for (int k = 0; k < n/2; ++k) {
        for (int i = 0; i < n/2; ++i) cout << ' ';
        cout << c << endl;
    }
    for (int i = 0; i < n; ++i) cout << c;
    cout << endl;
    for (int k = 0; k < n/2; ++k) {
        for (int i = 0; i < n/2; ++i) cout << ' ';
        cout << c << endl;
    }
}


int main() {
    int n;
    char c;
    cin >> n >> c;
    cross (n, c);
}