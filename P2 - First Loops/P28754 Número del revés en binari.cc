#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
    }

    else {
        while (n >= 1) {
            cout << n%2;
            n = n/2;
        }
    }

    cout << endl;
}
