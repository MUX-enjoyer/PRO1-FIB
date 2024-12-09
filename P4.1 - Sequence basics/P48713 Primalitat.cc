#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int n_inputs;
    cin >> n_inputs;

    for (int i = 0; i < n_inputs; ++i) {
        int n;
        cin >> n;
        if (n <= 1) cout << n << " no es primer" << endl;

        else {
            int cont = 2;
            while (n%cont != 0 and cont <= sqrt(n))
                ++cont;

            if (cont > sqrt(n)) cout << n << " es primer" << endl;
            else cout << n << " no es primer" << endl;
        }
    }
}
