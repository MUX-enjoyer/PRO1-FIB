#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

int suma_linia(const Matriu& mat, int of, int oc, int df, int dc) {
    int suma = 0;

    while (of != df or oc != dc) {
        if (df < of) --of;
        else if (df > of) ++of;
        if (dc < oc) --oc;
        else if (dc > oc) ++oc;

        suma += mat[of][oc];
    }
    return suma;
}

Matriu in_matriu(int f, int c) {
    Matriu m(f, vector<int>(c) );
    for (int i = 0; i < f; ++i) {
        for (int k = 0; k < c; ++k) {
            cin >> m[i][k];
        }
    }
    return m;
}

int main() {
    int n, m;
    cin >> n >> m;
    Matriu tauler = in_matriu(n, m);
    
    int of, oc, df, dc;
    cin >> of >> oc;
    int suma = tauler[of][oc];
    while (cin >> df >> dc) {
        suma += suma_linia(tauler, of, oc, df, dc);
        of = df;
        oc = dc;
    }
    cout << "suma = " << suma << endl;
}