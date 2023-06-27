// Essa função separa uma string em substrings e armazena em um vetor dinâmico

#include "questao.h"

int main() {
    string frase = "um programa para teste";

    auto v = vetor_cria<string>();

     v = separa(frase, ' ');

     for (int i = 0; i < vetor_tamanho(v); i++)
         std::cout << vetor_obtem(v, i) << std::endl;

    return 0;
}
