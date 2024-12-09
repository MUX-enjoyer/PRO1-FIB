#include <iostream>
#include <cmath>
using namespace std;

int main() {
  char a;
  
  cin >> a;
  
  if (int(a) < 91) {
    cout << "majuscula" << endl;
  }
  else {
    cout << "minuscula" << endl;
  }

  if (int(a) == 65 or int(a) == 69 or int(a) == 73 or int(a) == 79 or int(a) == 85 or int(a) == 97 or int(a) == 101 or int(a) == 105 or int(a) == 111 or int(a) == 117) {
    cout << "vocal" << endl;
  }
  else {
    cout << "consonant" << endl;
  }
}