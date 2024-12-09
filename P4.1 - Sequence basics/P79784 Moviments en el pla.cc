#include <iostream>
using namespace std;

int main() {
    char lletra;
    int x = 0, y = 0;

    while (cin >> lletra) {
        if (lletra == 'e') ++x;
        if (lletra == 'o') --x;
        if (lletra == 's') ++y;
        if (lletra == 'n') --y;
    }
    cout << '(' << x << ", " << y << ')' << endl;
}
