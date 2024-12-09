#include <iostream>
using namespace std;
#include <cmath>

int factorial(int n) {
    int suma = 1;
    for (int i = 1; i < n + 1; ++i) suma *= i;
    return (suma);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}
