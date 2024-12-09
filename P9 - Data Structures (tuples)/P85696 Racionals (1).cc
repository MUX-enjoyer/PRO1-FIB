#include <iostream>
using namespace std;
#include <vector>

struct Racional {
    int num, den;
};

Racional racional(int n, int d) {
    Racional rac;
    bool negat = false;

    if (n == 0) {
        d = 1;
    }
    else {
        if (n < 0 and d < 0) {
            n = n * -1;
            d = d * -1;
        }
        else {
            if (n*d < 0) {
                if (n < 0) n = n * -1;
                else d = d * -1;
                negat = true;
            }
        }

        int petit;
        if (n < d) petit = n;
        else petit = d;
        bool dividit = true;
        while (dividit) {
            dividit = false;
            for (int div = 2; div <= petit; ++div) {
                if (n % div == 0 and d % div == 0) {
                    n = n/div;
                    d = d/div;
                    dividit = true;
                }
            }
        }
    }
    
    if (negat) n = n * -1;
    rac.num = n;
    rac.den = d;
    return rac;
}

int main () {
    int n, d;
    cin >> n >> d;
    Racional frac_normal = racional(n, d);
    cout << frac_normal.num << " / " << frac_normal.den << endl;
}