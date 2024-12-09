#include <iostream>
using namespace std;
#include <cmath>

bool es_any_de_traspas(int any) {
    if (any % 4 == 0 and any % 100 != 0) return (true);
    else if (any % 100 == 0 and (any/100 % 4)== 0) return(true);
    else return(false);
}

bool es_data_valida(int d, int m, int a) {
    bool traspas = es_any_de_traspas(a);

    if (m > 0 and m < 13) {
        if (m == 2) {
            if (traspas and d > 0 and d < 30) return(true);
            else if (d > 0 and d < 29 and !traspas) return(true);
        }
        else if (m == 4 or m == 6 or m == 9 or m == 11) {
            if (d > 0 and d < 31) return(true);
        }
        else if (d > 0 and d < 32) return(true);
    }
    return(false);
}

int main() {
    int d, m, a;
    cin >> d >> m >> a;
    cout << es_data_valida(d, m ,a) << endl;
}
