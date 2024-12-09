#include <iostream>
using namespace std;

int main() {
    int n, cont = 1;

    cin >> n;

    while (n%2 != 0 and cin >> n) {
        ++cont;
    }
    cout << cont << endl;
}
