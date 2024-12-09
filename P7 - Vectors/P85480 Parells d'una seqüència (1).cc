#include <iostream>
using namespace std;
#include <vector>
#include <string>

vector<int> def_vec(int tamany) {
    vector<int> vec(tamany);
    for (int i = 0; i < tamany; ++i) {
        cin >> vec[i];
    }
    return vec;
}

bool es_primer(int n) {
    if (n <= 1) return(false);
    else {
        int cont = 2;
        while (n%cont != 0 and cont*cont <= n) ++cont;

        if (cont*cont > n) return(true);
        else return(false);
    }
}

string combinacions_seq_primer(vector<int> vec) {
    int tamany = vec.size();
    for (int i = 0; i < tamany; ++i) {
        for (int k = 0; k < tamany; ++k) {
            if(i != k and es_primer(vec[i] + vec[k])) return "si";
        }
    }
    return "no";
}


int main() {
    int n;
    while(cin >> n) {
        vector<int> seq = def_vec(n);
        cout << combinacions_seq_primer(seq) << endl;
    }
}
