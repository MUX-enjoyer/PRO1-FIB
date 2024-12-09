#include <iostream>
using namespace std;

void infoSequencia(int& max, int& lpos) {
    int n;
    int i = 1;
    cin >> n;
    max = n;
    while(n != 0) {
        if (n >= max) {
            max = n;
            lpos = i;
        }
        ++i;
        cin >> n;
    }
}


int main() {
    int max, lpos;
    infoSequencia(max, lpos);

    int i = 1;
    int n;
    cin >> n;
    while(n != max and n != 0) {
        ++i;
        cin >> n;
    }
    cout << max << ' ' << lpos << ' ';
    if (max == n) cout << i;
    else cout << '-';
    cout << endl;
}
