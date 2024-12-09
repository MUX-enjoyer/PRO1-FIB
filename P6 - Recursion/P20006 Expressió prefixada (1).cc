#include <iostream>
using namespace std;

int cal() {
    char x;
    cin >> x;
    if (x == '+') return(cal() + cal());
    else if (x == '-') return(cal() - cal());
    else if (x == '*') return(cal()*cal());
    else return (x - '0');
}

int main() {
    cout << cal() << endl;
}
