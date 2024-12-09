#include <iostream>
using namespace std;

void info_sequencia(int& suma, int& ultim) {
    suma = 0;
    int n;
    cin >> n;
    while(n != 0) {
        suma += n;
        ultim = n;
        cin >> n;
    }
}

int main() {
    int ultim, suma;
    info_sequencia(suma, ultim);

    int cont = 1;
    int ultim2, suma2;

    info_sequencia(suma2, ultim2);
    while (suma2 != 0) {
        if (suma == suma2 and ultim == ultim2) ++cont;
        info_sequencia(suma2, ultim2);
    }
    cout << cont << endl;
}
