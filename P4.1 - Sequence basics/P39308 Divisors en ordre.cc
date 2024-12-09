#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int n;
    while (cin >> n) {
        cout << "divisors de " << n << ':';

        for (int cont = 1; cont < sqrt(n); ++cont) {
            if (n%cont == 0)
                cout << " " << cont;
        }

        for (int cont2 = sqrt(n); cont2 >= 1; --cont2) {
            if (n%cont2 == 0)
                cout << " " << n/cont2;
        }
        
        cout << endl;
    }
}