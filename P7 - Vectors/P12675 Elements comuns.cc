#include <iostream>
using namespace std;
#include <vector>

vector<int> def_vec(int tamany) {
    vector<int> vec(tamany);
    for (int i = 0; i < tamany; ++i) cin >> vec[i];
    return vec;
}

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
    int cont = 0;
    int i = 0;
    int k = 0;
    while (i < X.size() and k < Y.size()) {
        if (X[i] < Y [k]) ++i;
        else if (X[i] > Y[k]) ++k;
        else {
            ++i;
            ++k;
            ++cont;
        }
    }
    return cont;
}

int main() {
    int n1, n2;
    cin >> n1;
    vector<int> v1 = def_vec(n1);
    cin >> n2;
    vector<int> v2 = def_vec(n2);
    cout << elements_comuns(v1, v2) << endl;
}