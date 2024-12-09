#include <iostream>
using namespace std;
#include <string>

void girar_ordre() {
    string paraula;
    if (cin >> paraula) {
        girar_ordre();
        cout << paraula << endl;
    }
}

int main() {
    girar_ordre();
}