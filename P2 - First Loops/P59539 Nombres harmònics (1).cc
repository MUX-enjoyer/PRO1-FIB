#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    cin >> n;

    int i = 1;
    double sum = 0;
    while (i <= n) {
        sum += 1.0/i;
        ++i;
    }

    cout << sum << endl;
}
