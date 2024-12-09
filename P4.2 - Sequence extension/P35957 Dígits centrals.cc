/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int func_num_digits (int x) {
    //contar el nombre de digits
    int num_digits = 0;
    if (x == 0) num_digits = 1;
    while (x > 0){
        x /= 10;
        ++num_digits;
    }
    return num_digits;
}

int central (int x) {
    //agafar el nombre central
    int n = func_num_digits(x);
    for (int i = 0; i < n/2; ++i) {
        x /= 10;
    }
    int central = x%10;
    return central;
}

int main() {
    int n, x;
    int i = 0;
    char guanyador = 'A';
    bool trobat = false;
    
    cin >> n >> x;
    int central_anterior = central (x);
    if (func_num_digits(x) % 2 == 0) {
        cout << 'B';
        trobat = true;
    }

    
    while (not trobat and i < (2*n - 1)) {
        cin >> x;
        
        if (central(x) != central_anterior or func_num_digits(x) % 2 == 0) {
            cout << guanyador;
            trobat = true;
        }
        else if (guanyador == 'A') guanyador = 'B';
        else guanyador = 'A';
    
        central_anterior = central (x);
        ++i;
    }

    if (!trobat) cout << '=';
    cout << endl;
}
