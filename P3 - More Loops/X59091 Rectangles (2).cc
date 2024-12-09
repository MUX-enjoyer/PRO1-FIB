#include <iostream>
using namespace std;

int main() {
    int f, c;
    bool first = true;
    while (cin >> f >> c) {
        if (!first) cout << endl;
        int n = 9;
        for (int i = 0; i < f; ++i) {
            for (int k = 0; k < c; ++k, --n) {
                if (n == -1) n = 9;
                cout << n;
            }
            cout << endl;
        }
        first = false;
    }
}