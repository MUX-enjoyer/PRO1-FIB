#include <iostream>
using namespace std;

int main() {
  char a,b;
  cin >> a >> b;

  if (a == b)
    cout << '-' << endl;
    
  else if ( (a == 'A' and b == 'P') or (a == 'P' and b == 'V') or (a == 'V' and b == 'A') ) {
    cout << '1' << endl;
  }

  else if ( (a == 'P' and b == 'A') or (a == 'V' and b == 'P') or (a == 'A' and b == 'V') ) {
    cout << '2' << endl;  
  }
}