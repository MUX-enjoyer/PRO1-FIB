#include <iostream>
using namespace std;
#include <vector>

struct Fraccio {
    int num, den;   // sempre estrictament positius
};

int calc_mcd(int a, int b) {
    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a;
}

Fraccio suma(const Fraccio& x, const Fraccio& y) {
    Fraccio a;
    a.num = x.num*y.den + y.num*x.den;
    a.den = x.den * y.den;
    int mcd = calc_mcd(a.num, a.den);
    a.num = a.num/mcd;
    a.den = a.den/mcd;
    return a;
}

int main () {
    Fraccio sum, nou;
    char x;
    bool igual = false;
    cin >> sum.num >> x >> sum.den >> x;
    if (x == '=') igual = true;
    while (!igual) {
        cin >> nou.num >> x >> nou.den >> x;
        sum = suma(sum, nou);
        if (x == '=') igual = true;
    }
    cout << sum.num << '/' << sum.den << endl;
}