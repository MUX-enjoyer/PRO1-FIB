#include <iostream>
using namespace std;
#include <string>

bool es_perfecte(int n) {
    int suma = 1;
    for (int i = 2; i*i < n; ++i) {
        if (n % i == 0)
            suma = suma + i + n/i;
    }
    if (suma == n and (n > 1)) return(true);
    else return(false);
}

int main() {
    int n;
    cin >> n;
    cout << es_perfecte(n) << endl;
}
