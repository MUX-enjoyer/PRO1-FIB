#include <iostream>
using namespace std;
#include <string>

void escriu_linia(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "cert" << endl;
    else cout << "fals" << endl;
}

int main() {
    char c;
    cin >> c;

    if ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')) {
        escriu_linia(c, "lletra", true);
    
        if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or
            c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
            escriu_linia(c, "vocal", true);
            escriu_linia(c, "consonant", false);
        }
        else {
            escriu_linia(c, "vocal", false);
            escriu_linia(c, "consonant", true);
        }
        
        if (c >= 'A' and c <= 'Z') {
            escriu_linia(c, "majuscula", true);
            escriu_linia(c, "minuscula", false);
        }
        else {
            escriu_linia(c, "majuscula", false);
            escriu_linia(c, "minuscula", true);
        }
    }
    else {
        bool b = false;
        escriu_linia(c, "lletra", b);
        escriu_linia(c, "vocal", b);
        escriu_linia(c, "consonant", b);
        escriu_linia(c, "majuscula", b);
        escriu_linia(c, "minuscula", b);
    }

    if (c >= '0' and c <= '9') escriu_linia(c, "digit", true);
    else escriu_linia(c, "digit", false);
}