#include <iostream>
using namespace std;

int main() {
    int b, n;
    while (cin >> b >> n) {
        int cont = 0;
        for (int suma = 1; (suma-1) < n; ++cont) {
            suma = suma * b;
        }
        cout << cont << endl;
    }
}