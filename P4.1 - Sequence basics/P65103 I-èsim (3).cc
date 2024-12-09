#include <iostream>
using namespace std;

int main() {
    int pos, n, nombre, num_entrats = 0;
    cin >> pos;
    bool trobat = false;

    while (cin >> n and not trobat) {
        ++num_entrats;
        if (pos == num_entrats) {
            trobat = true;
            nombre = n;
        }
    }

    if (trobat)
        cout << "A la posicio " << pos << " hi ha un " << nombre << '.' << endl;
    else cout << "Posicio incorrecta." << endl;
}