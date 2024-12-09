#include <iostream>
using namespace std;
#include <vector>
#include <string>

vector<string> def_vec(int tamany) {
    vector<string> vec(tamany);
    for (int i = 0; i < tamany; ++i) {
        cin >> vec[i];
    }
    return vec;
}

double longitud_mitja(vector<string> vec) {
    int tamany = vec.size();
    double suma = 0;
    for (int i = 0; i < tamany; ++i) {
        suma += vec[i].size();
    }
    return (suma/tamany);
}

char lletra_mes_frequent(const string& s) {
    const int LONG_ALFABET = 'z' - 'a' + 1;
    vector<int> alfabet(LONG_ALFABET, 0);
    for (int i = 0; i < s.size(); ++i) {
        ++alfabet[s[i] - 'a'];
    }
    int max = 0;
    for (int k = 0; k < LONG_ALFABET; ++k) {
        if (alfabet[k] > alfabet[max]) max = k;
    }
    return ('a' + max);
}


int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    cin >> n;
    vector<string> paraules = def_vec(n);
    double mitja = longitud_mitja(paraules);
    cout << mitja << endl;

    for (int i = 0; i < n; ++i) {
        if (paraules[i].size() >= mitja) {
            cout << paraules[i] << ": " << lletra_mes_frequent(paraules[i]) << endl;
        }
    }
}
