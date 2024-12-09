#include <iostream>
using namespace std;
#include <string>

void factor(int n, int& f, int& q) {
    f = n;
    q = 1;

    for (int i = 2; i*i <= n; ++i) {

        int cont = 0;
        while (n % i == 0) {
            n = n / i;
            ++cont;
        }

        if (cont > q or (i < f and cont == q)) {
            q = cont;
            f = i;
        }
    }
}

int main() {
    int n, f, q;
    f = 0;
    q = 0;
    cin >> n;
    factor(n, f, q);
    cout << f << ' ' << q << endl;
}
