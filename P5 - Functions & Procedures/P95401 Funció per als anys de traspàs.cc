#include <iostream>
using namespace std;
#include <cmath>

bool es_any_de_traspas(int any) {
    if (any % 4 == 0 and any % 100 != 0) return (true);
    else if (any % 100 == 0 and (any/100 % 4)== 0) return(true);
    else return(false);
}

int main() {
    int any;
    cin >> any;
    cout << es_any_de_traspas(any) << endl;
}
