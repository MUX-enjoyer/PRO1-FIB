#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    const int PICA = 3143;
    string mesaltpica = "NO";

    cin >> a;
    cin >> b;
    cin >> c;

    while (c != 0) {
        if (b > a and b > c and b > PICA) mesaltpica = "SI";
        a = b;
        b = c;
        cin >> c;
    }

    cout << mesaltpica << endl;
}
