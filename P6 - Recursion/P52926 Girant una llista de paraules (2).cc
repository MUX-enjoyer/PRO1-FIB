#include <iostream>
using namespace std;
#include <string>

void girar_ordre() {
    string paraula;
    cin >> paraula;
    if (paraula != "fi") {
        girar_ordre();
        cout << paraula << endl;
    }
}

int main() {
    girar_ordre();
}