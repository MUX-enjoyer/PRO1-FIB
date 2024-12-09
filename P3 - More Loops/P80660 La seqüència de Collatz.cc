#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int cont = 0;
        for (; n != 1; ++cont) {
            if (n%2 == 0) n = n/2;
            else n = n*3 + 1;
        }
        cout << cont << endl;
    }
}