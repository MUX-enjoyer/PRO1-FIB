#include <iostream>
using namespace std;
#include <cmath>

bool es_capicua(int n) {
    int suma = 0;
    for (int x = n; x > 0; x /= 10) {
        suma = suma*10 + x%10;
    }
    if (suma == n) return(true);
    else return(false);
}

int main() {
    int n;
    cin >> n;
    cout << es_capicua(n) << endl;
}
