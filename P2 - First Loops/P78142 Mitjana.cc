#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
	cout.precision(2);

  double n, suma = 0, count = 0;
  while (cin >> n) {
    suma = suma + n;
    ++count;
  }
  cout << suma/count << endl;
}
