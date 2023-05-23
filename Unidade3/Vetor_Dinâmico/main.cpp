#include <iostream>
#include "vetor.h"

using namespace prg2;
using std::cout;
using std::endl;

void mostra_vetor(VetorDinamico & v) {
    for (int i=0; i < vetor_tamanho(v); i++) {
        cout << vetor_obtem(v, i) << ' ';
    }
    cout << endl;
}

int main() {
    // VetorDinamico<int> v;

    // construtor de vetor
    // auto v = vetor_cria<int>();
    auto v = vetor_cria();

    // acrescenta um dado ao final do vetor
    //vetor_anexa(v, 5);
    //vetor_anexa(v, 6);
    //vetor_anexa(v, 7);

    //cout << "Tamanho: " << vetor_tamanho(v) << endl;
    //cout << "Posição 1: " << vetor_obtem(v, 1) << endl;

    mostra_vetor(v);

    for (int j = 0; j < 10; j++) {
        vetor_anexa(v, j+10);
    }

    cout << "Tamanho: " << vetor_tamanho(v) << endl;

    //cout << "Posição 1: " << vetor_obtem(v, 1) << endl;
    mostra_vetor(v);

    cout << "Fim: " << vetor_atras(v) << endl;

    vetor_remove_inicio(v);
    mostra_vetor(v);

    vetor_remove_fim(v);
    mostra_vetor(v);

    vetor_remove(v, 6);
    mostra_vetor(v);

    return 0;
//
//    vetor_remove(v, 1);
//
//    cout << "Tamanho: " << vetor_tamanho(v) << endl;
//    cout << "Posição 1: " << vetor_obtem(v, 1) << endl;
//
//    // insere um dado em, uma posição específica
//    // do vetor
//    vetor_insere(v, 1, 10);
//
//    cout << "Tamanho: " << vetor_tamanho(v) << endl;
//    cout << "Posição 1: " << vetor_obtem(v, 1) << endl;
//
//    // insere um dado no início do vetor
//    vetor_insere(v, 11);
//
//    // itera o vetor
//    mostra_vetor(v);
//
//    // ordena o vetor em ordem crescente
//    vetor_ordena(v);
//    mostra_vetor(v);
//
//    vetor_inverte(v);
//    mostra_vetor(v);
//
//    // remove dados contíguos duplicados
//    vetor_unicos(v);
//    mostra_vetor(v);
//
//    // remove tudo do vetor
//    vetor_limpa(v);
//
//    //destroi um vetor ... destrutor
//    vetor_destroi(v);

}
