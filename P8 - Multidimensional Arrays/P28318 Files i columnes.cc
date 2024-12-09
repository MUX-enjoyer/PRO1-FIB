#include <iostream>
using namespace std;
#include <vector>

int main () {
    int f, c;
    cin >> f >> c;
    vector<vector<int>> matriu(f, vector<int> (c));
    for (int i = 0; i < f; ++i) {
        for (int k = 0; k < c; ++k) {
            cin >> matriu[i][k];
        }
    }
    
    string consulta;
    int n;
    while (cin >> consulta) {
        cin >> n;
        if (consulta == "fila") {
            cout << "fila " << n << ':';
            for (int l = 0; l < c; ++l) {
                cout << ' ' << matriu[n-1][l];
            }
        }
        if (consulta == "columna") {
            cout << "columna " << n << ':';
            for (int l = 0; l < f; ++l) {
                cout << ' ' << matriu[l][n-1];
            }
        }
        if (consulta == "element") {
            int m;
            cin >> m;
            cout << "element " << n << ' ' << m << ": " << matriu[n-1][m-1];
        }
        cout << endl;
    }
}