#include <iostream>
using namespace std;

void canvi_base(int n, int base) {
    if (n > 0) {
        canvi_base(n/base, base);
        int x = n%base;
        if (x > 9) {
            if (x == 10) cout << "A";
            else if (x == 11) cout << "B";
            else if (x == 12) cout << "C";
            else if (x == 13) cout << "D";
            else if (x == 14) cout << "E";
            else if (x == 15) cout << "F";
        }
        else cout << x;
    }
}


int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        if (n == 0) cout << "0, 0, 0";
        else {
            canvi_base(n, 2);
            cout << ", ";
            canvi_base(n, 8);
            cout << ", ";
            canvi_base(n, 16);
        }
        cout << endl;
    }
}
