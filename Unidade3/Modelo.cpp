#include <iostream>
#include "vetor.h"

using namespace prg2;
using namespace std;


// Operações formato: anexa(v, 5)
// no exemplo do anexa, sendo v a estrutura e 5 o dado que quer anexar

void mostra_vetor (const VetorDinamico<int> & v){
    for (int i = 0; i < tamanho(v); i++) {
        cout << obtem(v, i) << ' ';
    }
    cout << endl;
}

int main() {
    // VetorDinamico<int> v;

    // Construtor do vetor
    auto v = cria_vetor();

    // Adiciona um dado ao final do vetor
    anexa(v, 5);
    anexa(v, 6);
    anexa(v, 7);

    cout << "Tamanho: " << tamanho(v) << endl;
    cout << "Posição 1" << obtem(v, 1) << endl; // v[0] = recurso mais avançado

    remove(v, 1);

    cout << "Tamanho: " << tamanho(v) << endl;
    cout << "Posição 1" << obtem(v, 1) << endl;

    // Insere um dado em uma posição específica do vetor
    insere(v, 1, 10);

    cout << "Tamanho: " << tamanho(v) << endl;
    cout << "Posição 1" << obtem(v, 1) << endl;

    // Insere um dado no inídio do vetor
    // Com somente 2 parâmetros, insere no início
    insere(v, 11);

    // Recurso mais avançado
    // for (auto & x: v) {
    //    cout << x << endl;
    // }

    // Itera o vetor
    mostra_vetor(v);

    // Ordena em ordem crescente
    ordena(v);
    mostra_vetor(v);

    // Inverte o vetor
    inverte(v);
    mostra_vetor(v);

    // Remove dados contiguos duplicados
    unicos(v);
    mostra_vetor(v);

    // Remove todos os dados
    limpa(v);

    // Destroi um vetor (destrutor)
    // "Avisa" pro sistema operacional que pode liberar a memória, não vai ser mais usado
    destroi_vetor(v);



    return 0;
}
