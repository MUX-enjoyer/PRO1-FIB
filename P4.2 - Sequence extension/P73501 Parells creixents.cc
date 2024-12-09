#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int k = 0; k < n; ++k) {
        int a, b, cont = 0;
        cin >> a;
        if (a != 0) {
            cin >> b;
            while (a != 0 and b != 0) {
                if (a < b) ++cont;
                a = b;
                cin >> b;
            }
        }
        cout << cont << endl;
    }
}
