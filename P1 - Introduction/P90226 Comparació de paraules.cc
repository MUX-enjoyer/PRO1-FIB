#include <iostream>
#include <cmath>
using namespace std;

int main() {
  string a,b;
  cin >> a >> b;
  if (a>b) {
    cout << a << " > " << b << endl;
} else if (a<b){
    cout << a << " < " << b << endl;
} else if (a==b){
    cout << a << " = " << b << endl;
}
}