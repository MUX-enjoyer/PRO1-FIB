#include <iostream>
using namespace std;
#include <cmath>

int max4(int a, int b, int c, int d) {
    int max;
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    return (max);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max4(a, b, c, d) << endl;
}
