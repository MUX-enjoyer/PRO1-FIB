#include <iostream>
using namespace std;

int main() {
  int f, c;
  cin >> f >> c;

  int suma = 0;
  bool blanca = true;
  for (int i = 0; i < f; ++i) {
    for (int k = 0; k < c; ++k) {
      char x;
      cin >> x;
      if (blanca) {
        suma += x - '0';
        blanca = false;
      }
      else blanca = true;
    }
    if (blanca and c!= 1) blanca = false;
    else if (c != 1) blanca = true;
  }

  cout << suma << endl;
}