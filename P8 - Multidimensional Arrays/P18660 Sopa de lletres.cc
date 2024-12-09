#include <iostream>
using namespace std;
#include <vector>
#include <string>

typedef vector< vector<char> > Matriu;



Matriu in_matriu(int f, int c) {
    Matriu m (f, vector<char>(c));
    
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


Matriu trobar_paraula (Matriu m, string paraula) {
    Matriu copia = m;
    int f = m.size();
    int c = m[0].size();
    int tamany_paraula = paraula.size();
    int cont = 0;

    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if (m[i][j] == paraula[cont] or m[i][j] == (paraula[cont] + 'A' - 'a')) {
                if (copia[i][j] >= 'a') copia[i][j] += 'A' - 'a';
                ++cont;
                if (cont ==  tamany_paraula) {
                    m = copia;
                    cont = 0;
                }
            }
            else {
                cont = 0;
                copia = m;
            }
        }
    }
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < f; ++j) {
            if (m[j][i] == paraula[cont] or m[j][i] == (paraula[cont] + 'A' - 'a')) {
                if (copia[j][i] >= 'a') copia[j][i] += 'A' - 'a';
                ++cont;
                if (cont ==  tamany_paraula) {
                    m = copia;
                    cont = 0;
                }
            }
            else {
                cont = 0;
                copia = m;
            }
        }
    }
    for (int pre_i = 0; pre_i < f; ++pre_i) {
        for (int i = pre_i, j = 0; j < c and i < f; ++j, ++i) {
            if (m[i][j] == paraula[cont] or m[i][j] == (paraula[cont] + 'A' - 'a')) {
                if (m[i][j] >= 'a') copia[i][j] += 'A' - 'a';
                ++cont;
                if (cont ==  tamany_paraula) {
                    m = copia;
                    cont = 0;
                }
            }
            else {
                cont = 0;
                copia = m;
            }
        }   
    }
    for (int pre_j = 1; pre_j < c; ++pre_j) {
        for (int i = 0, j = pre_j; j < c and i < f; ++j, ++i) {
            if (m[i][j] == paraula[cont] or m[i][j] == (paraula[cont] + 'A' - 'a')) {
                if (m[i][j] >= 'a') copia[i][j] += 'A' - 'a';
                ++cont;
                if (cont ==  tamany_paraula) {
                    m = copia;
                    cont = 0;
                }
            }
            else {
                cont = 0;
                copia = m;
            }
        }   
    }

    return m;
}


int main () {
    int x, m, n;
    bool primer = true;
    while (cin >> x >> m >> n) {
        if (!primer) cout << endl;
        else primer = false;
        vector<string> paraules(x);
        for (int i = 0; i < x; ++i) cin >> paraules[i];

        Matriu sopa = in_matriu(m, n);

        for (int k = 0; k < x; ++k) {
            sopa = trobar_paraula(sopa, paraules[k]);
        }

        out_matriu(sopa);
    }
}