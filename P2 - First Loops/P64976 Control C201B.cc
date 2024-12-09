#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int contador = 1;

  while (contador <= n) {
    cout << n << " x " << contador << " = " << n*contador << endl;
    ++contador;
  }
}