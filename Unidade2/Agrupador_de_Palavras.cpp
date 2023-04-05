#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <list>
#include <unordered_map>

using namespace std;

// junta -> junta as strings e separa por espaços (função separa)
string junta (vector <string> & v) {
    string r;

    if (!v.empty()) {
        for (auto &dado: v) {
            r += dado + ' ';
        }
        r.pop_back();
    }
    return r;
}
int main(int argc, char *argv[])
{
    // Abre arquivo para leitura
    ifstream arq (argv[1]);

    // Verifica se o arquivo foi realmente aberto
    if (!arq.is_open()) {
        cerr << "Arquivo invalido" << endl;
        return 1;
    }

    unordered_map<int, vector<string>> tab;
    string palavra;
    while (arq >> palavra) {
        //vector<string> & v = tab[palavra.size()];
        //v.push_back(palavra);
        tab[palavra.size()].push_back(palavra);
    }

    list <int> l_chaves;
    for (auto & par: tab) {
        l_chaves.push_back(par.first);
    }
    l_chaves.sort();

    // Imprime palavras
    for (auto & chave: l_chaves) {
        cout << junta(tab[chave]) << endl;
    }

    return 0;
}
