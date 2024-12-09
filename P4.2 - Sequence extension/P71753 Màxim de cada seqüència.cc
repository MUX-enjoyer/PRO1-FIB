#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {

        int num, max;
        cin >> num;
        max = num;

        for (int k = 1; k < n; ++k) {
            cin >> num;
            if (num > max) max = num;
        }

        cout << max << endl;
    }
}
