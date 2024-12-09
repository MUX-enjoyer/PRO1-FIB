#include <iostream>
using namespace std;
#include <vector>
#include <string>

vector<double> def_vec(int tamany) {
    vector<double> vec(tamany);
    for (int i = 0; i < tamany; ++i) {
        cin >> vec[i];
    }
    return vec;
}

bool es_palindrom(const string& s) {
    int ultim = s.size() - 1;
    for (int i = 0; i <= ultim; ++i) {
        if (s[i] != s[ultim]) return false;
        --ultim;
    }
    return true;
}

int main() {
    string paraula;
    cin >> paraula;
    cout << es_palindrom(paraula) << endl;
}
