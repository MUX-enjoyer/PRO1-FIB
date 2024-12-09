#include <iostream>
using namespace std;
#include <vector>
#include <string>

vector<int> def_vec(int tamany) {
    vector<int> vec(tamany);
    for (int i = 0; i < tamany; ++i) cin >> vec[i];
    return vec;
}

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
    int n1 = v1.size();
    int n2 = v2.size();
    vector<int> total(n1 + n2);
    for (int i = 0; i < n1; ++i) {
        total[i] = v1[i];
    }
    for (int k = 0; k < n2; ++k) {
        total[n1 + k] = v2[k];
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> v1 = def_vec(n);
    cin >> n;
    vector<int> v2 = def_vec(n);
    vector<int> v12 = concatenacio(v1, v2);
    for (int i = 0; i < v12.size(); ++i) {
        cout << v12[i] << endl;
    }
}