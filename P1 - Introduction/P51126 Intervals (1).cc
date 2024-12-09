#include <iostream>
using namespace std;

int main() {
  int a1,b1,a2,b2;
  cin>>a1>>b1>>a2>>b2;

  if (a1 >= a2 and b1 <= b2) cout << '['<< a1 << ',' << b1 << ']'<< endl;
  else if (a1 >= a2 and b1 >= b2 and a1 <= b2) cout << '['<< a1 << ',' << b2 << ']'<<endl;
  else if (a1 <= a2 and b1 <= b2 and a2 <= b1) cout << '['<< a2 << ',' << b1 << ']'<<endl;
  else if (a1 <= a2 and b1 >= b2) cout << '['<< a2 << ',' << b2 << ']'<<endl;

  else cout << '['<<']'<<endl;
}