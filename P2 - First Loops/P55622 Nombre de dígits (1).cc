#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    cout << "El nombre de digits de " << n;

    int sum = 0;
    if (n == 0) cout << " es " << '1' << '.' << endl;

    else {
        while (n >= 1) {
            ++sum;
            n = n/10;
        }
    cout << " es " << sum << '.' << endl;
    }
}
