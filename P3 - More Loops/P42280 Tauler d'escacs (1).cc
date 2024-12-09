#include <iostream>
using namespace std;

int main() {
    int f, c;
    cin >> f >> c;

    int suma = 0;
    for (int i = 0; i < c; ++i) {
        for (int k = 0; k < f; ++k) {
            char x;
            cin >> x;
            suma += x - '0';
        }
    }

    cout << suma << endl;
}
