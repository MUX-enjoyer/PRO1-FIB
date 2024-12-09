#include <iostream>
using namespace std;
#include <string>

void girar_ordre(int& n) {
    string paraula;
    if (cin >> paraula) {
        girar_ordre(n);
        if (n > 0) {
            cout << paraula << endl;
            --n;
        }
    }
}

int main() {
    int x;
    cin >> x;
    girar_ordre(x);
}