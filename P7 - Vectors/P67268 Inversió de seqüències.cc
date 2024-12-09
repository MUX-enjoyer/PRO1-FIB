#include <iostream>
using namespace std;
#include <vector>

vector<int> invertir(vector<int> v) {
    int mida = v.size();
    vector<int> v_invertit(mida);
    for (int i = 0; i < mida; ++i) {
        v_invertit[mida - i - 1] = v[i];
    }
    return v_invertit;
}

int main() {
    int mida;
    while (cin >> mida) {
        if (mida != 0) {
            vector<int> seq(mida);
            for (int i = 0; i < mida; ++i) {
                int x;
                cin >> x;
                seq[i] = x;
            }

            seq = invertir(seq);

            cout << seq[0];
            for (int i = 1; i < mida; ++i) {
                cout << ' ' <<seq[i];
            }
        }
        cout << endl;
    }
}
