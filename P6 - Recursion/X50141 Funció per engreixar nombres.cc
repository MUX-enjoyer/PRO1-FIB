#include <iostream>
using namespace std;

int engreixa(int x) {
    if (x < 10) return x;
    int n = engreixa(x/10);
    if (x % 10 < n % 10) n = n * 10 + n % 10;
    else n = n * 10 + x % 10;
    return n;
}

int main() {
    int n;
    cin >> n;
    cout << engreixa(n) << endl;
}