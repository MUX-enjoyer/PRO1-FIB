#include <iostream>
using namespace std;

int main() {
    int anys,dies,hores,minuts,segons;
    cin >> anys >> dies >> hores >> minuts >> segons;
    dies = dies + anys*365;
    hores = hores + dies*24;
    minuts = minuts + hores*60;
    segons = segons + minuts*60;
    cout << segons << endl;
}
