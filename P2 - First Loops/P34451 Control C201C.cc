#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  int n,contador=0;
  while (cin >> n) {
    if (n%x==0) {
      ++contador;
    }
  }
  cout << contador << endl;
}