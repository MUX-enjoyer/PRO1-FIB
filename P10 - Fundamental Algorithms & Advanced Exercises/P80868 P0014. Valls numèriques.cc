#include <iostream>
#include <vector>
using namespace std;

int main() {
    string n;
    int f;
    cin >> n >> f;
    const int MIDA_N = n.size();
    const int NUM_CHAR = f*(MIDA_N + 1)*2;

    for (int i = 1; i < f+1; ++i) {
        cout << n;
        for (int j = 1; j < i; ++j) cout << '-' << n;

        for (int k = 0; k < NUM_CHAR - i*(MIDA_N+1)*2 + 1; ++k) cout << '.';

        cout << n;
        for (int j = 1; j < i; ++j) cout << '-' << n;
        cout << endl;
    }
}