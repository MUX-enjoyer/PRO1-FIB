#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
	cout.precision(2);

  double n;
  cin >> n;
  
  double suma=0,suma_quadrats=0;
  for (int i=0;i<n;++i) {
    double num;
    cin >> num;
    suma += num;
    suma_quadrats += num*num;
  }
  cout << 1/(n-1)*suma_quadrats -  1/(n*(n-1))*suma*suma << endl;
}
