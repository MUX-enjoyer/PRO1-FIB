#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int suma = 0;
  for (int num = n;num>0;num = num/100) {
    suma += num%10;
  }
  
  if (suma%2==0) cout << n;
  else cout << n << " NO";
  cout << " ES TXATXI" << endl;
}
