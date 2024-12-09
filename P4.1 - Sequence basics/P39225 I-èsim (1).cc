#include <iostream>
using namespace std;

int main() {
    int a, pos;
    cin >> pos;
    
    for (int n = 1; n <= pos; ++n) {
        cin >> a;
    }
    
    cout << "A la posicio " << pos << " hi ha un " << a << '.' << endl;
}