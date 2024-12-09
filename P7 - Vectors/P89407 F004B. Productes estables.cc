#include <iostream>
using namespace std;
#include <vector>

void comptar_digits (vector<int>& vec, int n, int b) {
    while (n > 0) {
        ++vec[n%b];
        n = n/b;
    }
}

bool mateixos_digits(int x, int y, int b) {
    vector<int> xy(b, 0);
    vector<int> prod(b, 0);
    comptar_digits(xy, x, b);
    comptar_digits(xy, y, b);
    comptar_digits(prod, x*y, b);
    if (xy == prod) return true;
    else return false;
}

void escriu(int n, int b) {
    if (n != 0) {
        escriu(n/b, b);
        int x = n % b;
        if (x > 9) {
            cout << char(x - 10 + 'A');
        }
        else cout << x;
    }
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        bool trobat = false;
        cout << "solucions per a " << x << " i " << y << endl;
        for (int b = 2; b <= 16; ++b) {
            if (mateixos_digits(x, y, b)) {
                escriu(x, b);
                cout << " * ";
                escriu(y, b);
                cout << " = ";
                escriu(x*y, b);
                cout << " (base " << b << ")" << endl; 
                trobat = true;
            }
        }
        if (!trobat) cout << "cap" << endl;
        cout << endl;
    }
}