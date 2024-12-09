#include <iostream>
#include <vector>
using namespace std;

void ordena_per_insercio(vector<double>& v) {
    int mida = v.size();
    
    for (int i = 1; i < mida; ++i) {
        double aux = v[i];
        int j = i;
        while (j > 0 and aux < v[j-1]) {
            v[j] = v[j-1];
            --j;
        }
        v[j] = aux;
    }
}

int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) {
            cin >> V[i];
        }
        ordena_per_insercio(V);
        for (int i = 0; i < n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
    return 0;
}