#include <iostream>
using namespace std;
#include <vector>
#include <string>

vector<string> def_vec(int tamany) {
    vector<string> vec(tamany);
    for (int i = 0; i < tamany; ++i) cin >> vec[i];
    return vec;
}

bool conte(string s1, string s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    for (int i = 0; i < n1; ++i) {
        if (s1[i] == s2[0]) {
            int cont = 1;
            for (int k = 1; k < n2; ++k) {
                if (s1[i+k] == s2[k]) ++cont;
            }
            if (cont == n2) return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<string> paraules = def_vec(n);
    for (int i = 0; i < n; ++i) {
        cout << paraules[i] << ':';
        for (int k = 0; k < n; ++k) {
            if (conte(paraules[i], paraules[k]))
                cout << ' ' << paraules[k];
        }
        cout << endl;
    }
}