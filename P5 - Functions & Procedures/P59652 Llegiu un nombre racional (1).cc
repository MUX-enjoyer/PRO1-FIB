#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int x = a%b;
        a = b;
        b = x;
    }
    return(a);
}

void read_rational(int& num, int& den) {
    char barra;
    cin >> num >> barra >> den;
    int div = mcd(num, den);
    num = num / div;
    den = den / div;
}
int main() {
    int num, den;
    read_rational(num, den);
    cout << num << '/' << den << endl;
}