#include <iostream>
using namespace std;
#include <vector>

vector<string> def_vec(int tamany) {
    vector<string> vec(tamany);
    for (int i = 0; i < tamany; ++i) {
        cin >> vec[i];
    }
    return vec;
}

void girar_vec(vector<string> vec) {
    int tamany = vec.size();
    vector<string> vec_girat(tamany);
    for (int i = 0; i < tamany; ++i) {
        int tamany_frase = vec[tamany - 1 - i].size();
        for(int k = 0; k < tamany_frase; ++k) {
            cout << vec[tamany - 1 - i][tamany_frase -1 - k];
        }
        cout << endl;
    }
}


int main() {
    int n_frases;
    cin >> n_frases;
    vector<string> frases = def_vec(n_frases);

    girar_vec(frases);
}
