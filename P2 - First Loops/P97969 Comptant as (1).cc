#include <iostream>
using namespace std;

int main() {
  int x = 0;
  char lletra;
  int contador_as;
  
  while (!x) {
    cin >> lletra;
    if (lletra == 'a') ++contador_as;
    if (lletra == '.') x = 1;
  }
  cout << contador_as << endl;
}
