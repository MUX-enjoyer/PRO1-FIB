#include <iostream>
using namespace std;
#include <cmath>

int sinus(double x) {
    cout << sin(x);
    return (x);
}

int cosinus(double x) {
    cout << cos(x);
    return (x);
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);

    double n;
    while (cin >> n) {
        n = 2*n*M_PI / 360;

        sinus(n);
        cout << ' ';
        cosinus(n);
        cout << endl;
    }
}
