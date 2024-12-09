#include <iostream>
using namespace std;

int main (){
    bool trobat = false;
    char x;
    cin >> x;
    while (!trobat and x != '.') {
        if (x == 'h') {
            cin >> x;
            if (x == 'o') {
                cin >> x;
                if (x == 'l') {
                    cin >> x;
                    if (x == 'a') {
                        cout << "hola" << endl;
                        trobat = true;
                    }
                }
            }
        }
        else cin >> x;
    }
    if (!trobat) cout << "adeu" << endl;
}