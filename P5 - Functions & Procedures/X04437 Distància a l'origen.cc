#include <iostream>
using namespace std;
#include <cmath>

double dist_or(double x, double y) {
    return (sqrt(x*x + y*y));
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << dist_or(x, y);
}
