#include <iostream>
using namespace std;
#include <cmath>

int quadrat(int x) {
    cout << x*x;
    return (x);
}

int arrel(double x) {
    cout.setf(ios::fixed);
    cout.precision(6);
    cout << sqrt(x);
    return (x);
}


int main() {
    int n;
    while (cin >> n){
        quadrat(n);
        cout << ' ';
        arrel(n);
        cout << endl;
    }
}
