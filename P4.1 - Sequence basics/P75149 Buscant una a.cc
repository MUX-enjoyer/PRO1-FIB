#include <iostream>
using namespace std;

int main() {

  char lletra;
  cin >> lletra;

  while (lletra != 'a' and lletra != '.') cin >> lletra;

  if (lletra == 'a') cout << "si" << endl;
  else cout << "no" << endl;
}
