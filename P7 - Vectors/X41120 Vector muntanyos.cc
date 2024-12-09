#include <iostream>
using namespace std;
#include <vector>

vector<int> def_vec(int tamany) {
    vector<int> vec(tamany);
    for (int i = 0; i < tamany; ++i) cin >> vec[i];
    return vec;
}

vector<int> calcula_cims(const vector<int>& v) {
    int tamany = v.size();
    vector<int> aux(tamany);
    int cont = 0;
    for (int i = 1; i < tamany - 1; ++i) {
        if (v[i] > v[i-1] and v[i] > v[i+1]) {
            aux[cont] = v[i];
            ++cont;
        }
    }
    vector<int> w(cont);
    for (int k = 0; k < cont; ++k) w[k] = aux[k];
    return w;
}

void print_vec(vector<int> vec) {
    int tamany = vec.size();
    if (tamany == 0) cout << endl << '-';
    else {
        for (int i = 0; i < tamany; ++i) cout << ' ' << vec[i];
        cout << endl;

        bool trobat = false;
        bool primer = true;
        for (int k = 0; k < tamany; ++k) {
            if (vec[k] > vec[tamany - 1]) {
                if (primer) {
                    cout << vec[k];
                    primer = false;
                }
                else cout << ' ' << vec[k];
                trobat = true;
            }
        }
        if (!trobat) cout << '-';
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> serralada = def_vec(n);
    serralada = calcula_cims(serralada);
    cout << serralada.size() << ':';
    print_vec(serralada);
}