#include <iostream>
using namespace std;
#include <vector>

int repeticions_ultim(vector<int> v) {
    int mida = v.size();
    int cont = 0;
    for (int i = 0; i < mida - 1; ++i) {
        if (v[mida - 1] == v[i]) ++cont;
    }
    return cont;
}


int main() {
    int tamany;
    cin >> tamany;
    vector<int> joan(tamany);
    for (int i = 0; i < tamany; ++i) {
        int n;
        cin >> n;
        joan[i] = n;
    }
    cout << repeticions_ultim(joan) << endl;
}
