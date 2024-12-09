#include <iostream>
using namespace std;

void barres(int x) {
    if (x == 1) {
        cout << '*' << endl;
    }
    else {
        barres(x-1);
        for (int i = 0; i < x; ++i) cout << '*';
        cout << endl;
        barres(x-1);
    }
}

int main() {
    int n;
    cin >> n;
    barres(n);
}
