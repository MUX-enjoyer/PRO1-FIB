#include <iostream>
using namespace std;
#include <vector>

vector<int> def_vec(int tamany) {
    vector<int> vec(tamany);
    for (int i = 0; i < tamany; ++i) cin >> vec[i];
    return vec;
}

vector<bool> pos_rampa(const vector <int>& V) {
    int tamany = V.size();
    vector<bool> rampes(tamany);
    for (int i = 0; i < tamany - 2; ++i) {
        if (V[i] > V[i+1] and V[i+1] > V[i+2]) rampes[i] = true;
        else if (V[i] < V[i+1] and V[i+1] < V[i+2]) rampes[i] = true;
        else rampes[i] = false;
    }
    return rampes;
}

int pot_conflictives (const vector <bool>& B) {
    int conflicte = 0;
    for (int i = 0; i < B.size(); ++i) {
        if (B[i] == true and B[i+1] == true) ++conflicte;
        if (B[i] == true and B[i+2] == true) ++conflicte;
    }
    return conflicte;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> altura = def_vec(n);
        vector<bool> rampes = pos_rampa(altura);
        cout << "posicions amb rampa:";
        for (int i = 0; i < n; ++i) {
            if (rampes[i]) cout << ' ' << i;
        }
        cout << endl << "potencialment conflictives:" << ' ';
        cout << pot_conflictives(rampes) << endl << "---" << endl;
    }
}