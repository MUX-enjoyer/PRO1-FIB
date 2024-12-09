#include <iostream>
using namespace std;
#include <string>

int main() {
    int n, linia = 0;
    bool ordre = false;

    while (!ordre and cin >> n) {
        ordre = true;
        ++linia;
        string a = "";
        string b;
        for (int i = 0; i < n; ++i) {
            cin >> b;
            if (b < a) ordre = false;
            a = b;
        }
    }
    if (ordre)
        cout << "La primera linia ordenada creixentment es la " << linia << '.' << endl;
    else
        cout << "No hi ha cap linia ordenada creixentment." << endl;
}