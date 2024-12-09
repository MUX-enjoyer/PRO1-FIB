#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a;
  cin >> a;
  cout << int(floor(a)) <<" "<< int(ceil(a)) <<" "<< int(round(a))<<endl;
}