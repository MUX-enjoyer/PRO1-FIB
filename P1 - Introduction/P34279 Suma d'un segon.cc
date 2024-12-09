#include <iostream>
using namespace std;

int main() {
    int h,m,s;
    cin >> h >> m >> s;

    ++s;

    if (s >= 60) {
        s = s % 60;
        ++m;
    }
    if (m >= 60) {
        m = m % 60;
        ++h;
    }

    if (h >= 24) {
        h = h % 24;
    }

    if (h < 10)
        cout << '0';
    cout << h << ':';

    if (m < 10)
        cout << '0';
    cout << m << ':';

    if (s < 10)
        cout << '0';
    cout << s << endl;
}

