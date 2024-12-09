#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    int cont = 0;
    bool principi = false, final = false;
    
    while (cin >> x and x != "final") {
        if (x == "principi")
            principi = true;
        else if (principi)
            ++cont;
    }
    
    if (principi and x == "final")
        cout << cont << endl;
    else
        cout << "sequencia incorrecta" << endl;
}