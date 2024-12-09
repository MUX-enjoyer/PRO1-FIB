#include <iostream>
using namespace std;
#include <string>

int main() {
    int n;
    int linia = 0;
    int ultima = 0;
    
    while (cin >> n) {
        ++linia;
        bool ordre = true;
        
        if (n != 0) {
            string a, b;
            cin >> a;
            for (int i = 1; i < n; ++i) {
                b = a;
                cin >> a;
                if (a < b) ordre = false;
            }
        }
        if (ordre) ultima = linia;
    }


    if (ultima > 0)
        cout << "L'ultima linia ordenada creixentment es la " << ultima << '.' << endl;
    else
        cout << "No hi ha cap linia ordenada creixentment." << endl;
}