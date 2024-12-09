#include <iostream>
using namespace std;
#include <vector>

vector<double> def_vec(int tamany) {
    vector<double> vec(tamany);
    for (int i = 0; i < tamany; ++i) {
        cin >> vec[i];
    }
    return vec;
}


double producte_escalar(const vector<double>& u, const vector<double>& v) {
    double suma = 0;
    for (int i = v.size() - 1; i >= 0; --i) {
        suma += u[i]*v[i];
    }
    return suma;
}



int main() {
    int n;
    cin >> n;
    vector<double> a = def_vec(n);
    vector<double> b = def_vec(n);

    cout << producte_escalar(a,b) << endl;
}
