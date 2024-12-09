#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int b = 1;

  while (b <= 10) {
    cout << n << '*' << b << " = " << n*b << endl;
    ++b;
  }
}