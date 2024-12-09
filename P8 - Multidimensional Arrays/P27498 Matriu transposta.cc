#include <iostream>
using namespace std;
#include <vector>

void transposa(vector<vector<int>>& m) {
    int tamany = m.size();
    vector< vector<int> > trans(tamany, vector<int>(tamany));
    for (int i = 0; i < tamany; ++i) {
        for (int k = 0; k < tamany; ++k) {
            trans[k][i] = m[i][k];
        }
    }
    m = trans;
}

int main () {
    int f, c;
    cin >> f >> c;
    vector< vector<int> > my_matrix(f,vector<int>(c));
    for (int i = 0; i < f; ++i) {
        for (int k = 0; k < c; ++k) {
            cin >> my_matrix[i][k];
        }
    }
    
    transposa(my_matrix);

    for (int i = 0; i < f; ++i) {
        for (int k = 0; k < c; ++k) {
            cout << my_matrix[i][k];
        }
        cout << endl;
    }
}