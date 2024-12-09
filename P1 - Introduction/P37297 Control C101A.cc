#include <iostream>
using namespace std;

int main() {
  int n, suma;
  cin >> n;

  suma = (n%10) + (n/10 % 10) + (n/100 % 10);
  
  cout << suma << endl;
}