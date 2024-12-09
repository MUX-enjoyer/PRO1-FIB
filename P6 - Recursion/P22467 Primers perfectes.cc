#include <iostream>
using namespace std;

bool es_primer(int n) {
    if (n <= 1) return(false);
    else {
        int cont = 2;
        while (n%cont != 0 and cont*cont <= n) ++cont;

        if (cont*cont > n) return true;
        else return false;
    }
}

bool es_primer_perfecte(int n) {
    if(es_primer(n)) {
        if (n < 10) return true;
        else {
            int suma = 0;
            while (n > 0) {
                suma += n%10;
                n /= 10;
            }
            if (es_primer_perfecte(suma)) return true;
            else return false;
        }
    }
    else return false;
}

int main() {
    int n;
    cin >> n;
    cout << es_primer_perfecte(n) << endl;
}
