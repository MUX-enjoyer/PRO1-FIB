#include <iostream>
using namespace std;

int main() {
  
  int n;
  while (cin >> n) {
    int x = 0;
    for (int space = n-1; space > 0; --space, ++x) {
      for (int j = 0; j < (space); ++j) cout << ' ';
      for (int k = 0; k < 2*x + n; ++k) cout << 'X';
      cout << endl;
    }
    
    for (int i = 0; i < n; ++i) {
      for (int l = 0; l < 2*x + n; ++l) cout << 'X';
      cout << endl;
    }

    for (int space = 1; space < n; ++space, --x) {
      for (int j = 0; j < (space); ++j) cout << ' ';
      for (int k = 0; k < 2*(x -1) + n; ++k) cout << 'X';
      cout << endl;
    }

    cout << endl;
  }
}