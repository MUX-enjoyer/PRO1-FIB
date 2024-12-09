#include <iostream>
using namespace std;
#include <cmath>

void descompon(int n, int& h, int& m, int& s) {

    h = n / (60*60);
    n = n % (60*60);

    m = n / (60);
    n = n % (60);

    s = n;
}

int main() {
    int n, h, m, s;
    cin >> n;
    descompon(n,h,m,s);
    cout << h << ' ' << m << ' ' << s << endl;
}
