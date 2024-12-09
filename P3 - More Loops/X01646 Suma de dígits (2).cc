#include <iostream>
using namespace std;

int main() {
    int b;
    cin >> b;
    
    int n;
    while (cin >> n) {
        int suma = 0;
        for (int i = n; i > 0; i = i/b) suma += i%b;
        cout << n << ": " << suma << endl;
  }
}