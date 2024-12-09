#include <iostream>
using namespace std;

int main() {
    int n, digits_finals, total = 0;
    cin >> n;

    digits_finals = n%1000;
    cout << "nombres que acaben igual que " << n << ':' << endl;

    while (cin >> n) {

        if (digits_finals == n%1000) {
            cout << n << endl;
            ++total;
        }
    }

    cout << "total: " << total << endl;
}
