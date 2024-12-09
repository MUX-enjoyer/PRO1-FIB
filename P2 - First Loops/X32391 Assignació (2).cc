#include <iostream>
using namespace std;
#include <cmath> 

int main() {
  int d,n,t;
  cin >> d >> n >> t;
  int setmana_positiva = 0;
  for (int i=0;i<t;++i) {
    int assig_setmanal;
    cin >> assig_setmanal;
    n = n+assig_setmanal-d;
    if (n > 0) {
      ++setmana_positiva;
    }
  }
  cout << setmana_positiva << endl;
}
