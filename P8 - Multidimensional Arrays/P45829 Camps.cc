#include <iostream>
using namespace std;
#include <vector>

typedef vector< vector<int> > Matriu;

int rectangles_conreus(Matriu m) {
    int f = m.size();
    int c = m[0].size();
    int cont = 0;
    bool rectangle = false;

    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if (m[i][j] != 0 and !rectangle) {
                if (i == 0) ++cont;
                else if (m[i][j] != m[i - 1][j]) ++cont;
                rectangle = true;
            }
            else if (m[i][j] == 0) rectangle = false;
        }
    }
    return cont;
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

int main () {
    int f, c;
    while (cin >> f >> c) {
        Matriu m = in_matriu(f, c);
        cout << rectangles_conreus(m) << endl;
    }
}