#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, gran1 = "", gran2 = "";

    while (cin >> x) {
        
        if (x > gran1) {
            gran2 = gran1;
            gran1 = x;
        }
        if (gran2 < x and x < gran1)
            gran2 = x;
    }
    
    cout << gran2 << endl;
}