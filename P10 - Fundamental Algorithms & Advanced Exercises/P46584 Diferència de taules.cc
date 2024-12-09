#include <iostream>
#include <vector>
using namespace std;

vector<double> diferencia(const vector<double>& v1, const vector<double>& v2) {
    int mida1 = v1.size();
    int mida2 = v2.size();
    vector <double> aux(mida1);
    int i , j, cont;
    i = j = cont = 0;
    while (i < mida1 and j < mida2) {
        if (v1[i] < v2[j]) {
            if (cont == 0 or v1[i] != aux[cont-1]) {
                aux[cont] = v1[i];
                ++cont;
            }
            ++i;
        }
        else if (v1[i] > v2[j]) ++j;
        else ++i;
    }
    while (i < mida1) {
        if (cont == 0 or v1[i] != aux[cont-1]) {
            aux[cont] = v1[i];
            ++cont;
        }
        ++i;
    }
    
    vector <double> f(cont);
    for (int k = 0; k < cont; ++k) f[k] = aux[k];
    return f;
}


int main() {
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(4);
  
  int n1;
  while (cin >> n1) {
    vector<double> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<double> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];

    vector<double> res = diferencia(V1, V2);

    int n3 = res.size();
    cout << n3 << endl;
    for (int i = 0; i < n3; ++i) cout << " " << res[i];
    cout << endl << endl;

    for (int r = 0; r < 200; ++r) {
      vector<double> res2 = diferencia(V1, V2);
      if (res2 != res) cout << "Resultats diferents amb la mateixa entrada!" << endl;
    }
  }
  return 0;
}