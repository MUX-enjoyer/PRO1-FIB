#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int a = 1; a<(n+1); ++a) {
        for (int b = 0; b<a; ++b) cout << '*';
        cout << endl;
    }
}
