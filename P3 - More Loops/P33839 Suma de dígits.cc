#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int suma = 0;
        for (int j = n; j > 0; j = j/10) suma += j%10;
        cout << "La suma dels digits de " << n << " es " << suma << '.' << endl;
    }
}