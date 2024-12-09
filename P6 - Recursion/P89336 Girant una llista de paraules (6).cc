#include <iostream>
using namespace std;
#include <string>

void girar_ordre(int& n, int& n_par) {
    string paraula;
    if (cin >> paraula) {
        ++n_par;
        girar_ordre(n, n_par);
        if (n*2 > n_par - 1) { 
            cout << paraula << endl;
        }
        ++n;
    }
}

int main() {
    int n, n_par;
    n = n_par = 0;
    girar_ordre(n, n_par);
}