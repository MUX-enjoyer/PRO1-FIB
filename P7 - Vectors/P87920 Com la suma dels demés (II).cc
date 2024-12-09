#include <iostream>
using namespace std;
#include <vector>
#include <string>

vector<int> def_vec(int tamany) {
    vector<int> vec(tamany);
    for (int i = 0; i < tamany; ++i) {
        cin >> vec[i];
    }
    return vec;
}

string igual_suma_altres(vector<int> vec, int suma) {
    for (int k = 0; k < vec.size(); ++k) {
        if (vec[k] == suma - vec[k]) return "YES";
    }
    return "NO";
}

int main() {
    int n;
    while(cin >> n) {
        vector<int> vec(n);
        int suma = 0;
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
            suma += vec[i];
        }
        cout << igual_suma_altres(vec, suma) << endl;
    }
}
