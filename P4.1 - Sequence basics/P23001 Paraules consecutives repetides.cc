#include <iostream>
using namespace std;

int main() {
    string paraula, x;
    cin >> paraula;
    
    int cont_repeticions = 1, repeticions_max = 1;
    
    while (cin >> x) {
        
        if (x == paraula) {
            ++cont_repeticions;
            if (repeticions_max <= cont_repeticions) {
                repeticions_max = cont_repeticions;
            }
        }
        else cont_repeticions = 0;
    }
    if (repeticions_max <= cont_repeticions) {
        repeticions_max = cont_repeticions;
    }
    cout << repeticions_max << endl;
}