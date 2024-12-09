#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    cin >> n;

    for (int j = 0; j < n; ++j) {
        int m;
        cin >> m;

        double num;
        cin >> num;
        double max, min, suma;
        max = min = suma = num;

        for (int k = 1; k < m; ++k) {
            cin >> num;
            if (num > max) max = num;
            else if (num < min) min = num;
            suma += num;
        }
        cout << min << ' ' << max <<  ' ' << suma/m << endl;
    }
}
