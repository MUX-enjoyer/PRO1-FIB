#include <iostream>
using namespace std;

int main() {
  const int mutliple_anys_traspas = 4;
  const int anystraspasnotraspas = 100;
  
  int any;
  cin >> any;

  if (any%4 == 0 and any%100 != 0) cout << "YES" << endl;
  else if (any % 100 == 0 and (any/100 % 4)== 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}