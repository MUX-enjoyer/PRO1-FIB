#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int base = 2;
    while (base <= 16) {
        int xifres = 0;
        int i = n;

        while (i >= 1) {
            i /= base;
            ++xifres;
        }

        cout << "Base " << base << ": " << xifres << " cifras." << endl;
        ++base;
    }
}
