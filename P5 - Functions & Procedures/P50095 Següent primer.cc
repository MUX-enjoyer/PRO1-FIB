#include <iostream>
using namespace std;

bool es_primer(int n) {
    if (n <= 1) return(false);
    else {
        int cont = 2;
        while (n%cont != 0 and cont*cont <= n) ++cont;

        if (cont*cont > n) return(true);
        else return(false);
    }
}

int seg_primer(int n) {
    ++n;
    while (not es_primer(n)) {
        ++n;
    }
    return(n);
}

int main() {
    int n;
    cin >> n;
    while (es_primer(n)) {
        cout << seg_primer(n) << endl;
        cin >> n;
    }
}
