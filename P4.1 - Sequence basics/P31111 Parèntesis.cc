#include <iostream>
using namespace std;

int main() {
    char x;
    int paritat = 0;
    bool wrong = false;
    
    while (cin >> x) {
        if (x == '(' and paritat >= 0) ++paritat;
        else if (x == ')') --paritat;
        else wrong = true;
    }
    
    if (paritat == 0 and !wrong) cout << "si" << endl;
    else cout << "no" << endl;
}