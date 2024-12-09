#include <iostream>
using namespace std;
#include <cmath> 

int main() {
  cout.setf(ios::fixed);
  cout.precision(6);

  
  int n;
  cin >> n;
  for (int i = 0;i<n;++i) {
    string forma;
    cin >> forma;
    if (forma == "rectangle"){
      double base,altura;
      cin >> base >> altura;
      cout << base*altura << endl;  
    }
    if (forma == "cercle"){
      double radi;
      cin >> radi;
      cout << M_PI*radi*radi << endl;
    }
  }
}
