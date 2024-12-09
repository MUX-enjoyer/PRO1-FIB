#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char hex;
    int aux;

    if (n == 0) cout << 0;

    else {
        while (n >= 1) {
            aux = n%16;
            if (aux < 10) cout << aux;
            else {
                aux -= 10;
                hex = 'A' + aux;
                cout << hex;
            }
            n /= 16;
        }
    }

    cout << endl;
}
