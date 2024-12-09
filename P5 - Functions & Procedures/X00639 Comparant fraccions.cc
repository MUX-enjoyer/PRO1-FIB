#include <iostream>
using namespace std;
#include <cmath>

bool c_frac(int n1, int d1, int n2, int d2) {
    if (d2*n1 < d1*n2) return(true);
    else return false;
}

int main() {
    int n1, d1, n2, d2;
    cin >> n1 >> d1 >> n2 >> d2;
    cout << c_frac(n1, d1, n2, d2) << endl;
}
