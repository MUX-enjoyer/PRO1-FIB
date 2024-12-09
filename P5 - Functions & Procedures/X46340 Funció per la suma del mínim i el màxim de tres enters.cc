#include <iostream>
using namespace std;
#include <cmath>

int sum_min_max(int x, int y, int z) {
    int min, max;

    max = x;
    if (y > max) max = y;
    if (z > max) max = z;

    min = x;
    if (y < min) min = y;
    if (z < min) min = z;

    return (min + max);
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << sum_min_max(x, y, z) << endl;
}
