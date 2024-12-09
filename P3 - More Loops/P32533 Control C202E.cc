#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int a = 1; a<(n+1); ++a) {
        for (int b = (n); b>a; --b) cout << '+';
        cout << '/';
        for (int c = 1; c<a; ++c) cout << '*';
        cout << endl;
    }
}
