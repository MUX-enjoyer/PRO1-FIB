#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  double c, i, t;
  string tipus_interes;
  cin >> c >> i >> t >> tipus_interes;

  if (tipus_interes == "simple") c += c*i/100*t;

  else {
    for (int aux = 0; aux<t; ++aux) {
      c += c*i/100;
    }
  }
    
  cout << c << endl;
}