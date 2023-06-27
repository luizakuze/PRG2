#include "vetor.h"

using namespace prg2;
using std::cout;
using std::endl;
using std::string;

int main() {

//    // Construtor de vetor
//    auto v = vetor_cria<float>();
//
//    // Teste para vetor dinâmico do tipo float
//    vetor_anexa(v, 1.11f);
//    vetor_anexa(v, 2.22f);
//    vetor_insere(v, 3.33f);
//    //vetor_insere(v, 1, 20000.1f);
//
//    mostra_vetor(v);
//    cout << "Primeiro dado: " << vetor_frente(v) << endl;
//    cout << "Ultimo dado: " << vetor_atras(v) << endl;
//
//    vetor_remove(v, 2);
//    mostra_vetor(v);
//
//    cout << endl;

    // Teste para vetor dinâmico do tipo string

    auto v2 = vetor_cria<string>();

    vetor_anexa<string>(v2, "um");
    vetor_anexa<string>(v2, "dois");
    vetor_anexa<string>(v2, "tres");
    vetor_insere<string>(v2, "quatro");
    //vetor_insere<string>(v2, 1, "cinco");

    mostra_vetor(v2);
    cout << "Primeiro dado: " << vetor_frente(v2) << endl;
    cout << "Ultimo dado: " << vetor_atras(v2) << endl;

//    vetor_remove(v2, 2);
//    cout << "Remove dado posição 2: ";
//    mostra_vetor(v2);
//
//    vetor_remove_inicio(v2);
//    cout << "Remove dado do inicio: ";
//    mostra_vetor(v2);
//
//    vetor_remove_fim(v2);
//    cout << "Remove dado do fim: ";
//    mostra_vetor(v2);

    //vetor_limpa(v2);
    //mostra_vetor(v2);

    cout << "Tamanho: " << vetor_tamanho(v2) << endl;
    cout << "Capacidade: " << vetor_capacidade(v2) << endl;

    cout << "Vetor[0]: " << vetor_obtem(v2, 0) << endl;
    cout << "Vetor[1]: " << vetor_obtem(v2, 1) << endl;
    cout << "Vetor[2]: " << vetor_obtem(v2, 2) << endl;

    //vetor_obtem(v2, 0);
    //vetor_obtem(v2, 1);
    
    vetor_destroi(v2);

    return 0;
}
