#include <iostream>
using namespace std;
#include <vector>

typedef vector< vector<int> > Matriu;


Matriu producte(const Matriu& a, const Matriu& b) {
    int p = a.size();
    int q = b.size();
    int r = b[0].size();    
    Matriu prod(p, vector<int>(r));
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < r; ++j) {
            int suma = 0;
            for (int k = 0; k < q; ++k) {
                suma += a[i][k]*b[k][j];
            }
            prod[i][j] = suma;
        }
    }   
    return prod;
}


Matriu in_matriu() {
    int f, c;
    cin >> f >> c;
    Matriu m(f, vector<int>(c) );
    
    for (int i = 0; i < f; ++i) {
        for (int k = 0; k < c; ++k) {
            cin >> m[i][k];
        }
    }
    return m;
}

void out_matriu(Matriu m) {
    int f = m.size();
    int c = m[0].size();

    for (int i = 0; i < f; ++i) {
        cout << m[i][0];
        for (int k = 1; k < c; ++k) {
            cout << ' ' << m[i][k];
        }
        cout << endl;
    }
}

int main () {
    Matriu a = in_matriu();
    Matriu b = in_matriu();

    Matriu c = producte(a, b);

    out_matriu(c);
}