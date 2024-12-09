#include <iostream>
using namespace std;

void digit_maxim_i_minim(int x, int& maxim, int& minim) {
    if (x < 10) {
        maxim = x;
        minim = x;
    }
    else {
        digit_maxim_i_minim(x/10, maxim, minim);
        if (x % 10 > maxim) maxim = x % 10;
        if (x % 10 < minim) minim = x % 10;
    }
}

int main() {
    int x, maxim, minim;
    cin >> x;
    digit_maxim_i_minim(x, maxim, minim);
    cout << maxim << ' ' << minim << endl;
}
