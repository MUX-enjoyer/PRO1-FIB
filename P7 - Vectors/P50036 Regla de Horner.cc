#include <iostream>
using namespace std;
#include <vector>

vector<int> def_vec(int tamany) {
    vector<int> vec(tamany + 1);
    for (int i = 0; i <= tamany; ++i) {
        cin >> vec[i];
    }
    return vec;
}

int avalua(const vector<int>& p, int x) {
    int suma = 0;
    for (int k = p.size() - 1; k > 0; --k) {
        suma = (p[k] + suma)*x;
    }
    suma = suma + p[0];
    return suma;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> polinomi = def_vec(n);
    cin >> x;
    cout << avalua(polinomi, x) << endl;
}
