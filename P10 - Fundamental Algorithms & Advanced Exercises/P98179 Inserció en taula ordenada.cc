#include <iostream>
#include <vector>
using namespace std;

void insereix(vector<double>& v) {
    int i = v.size() - 1;
    while (i != 0 and v[i] < v[i-1]) {
        double aux = v[i];
        v[i] = v[i-1];
        v[i-1] = aux;
        --i;
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
        insereix(V);
        for (int i = 0; i < n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
    return 0;
}