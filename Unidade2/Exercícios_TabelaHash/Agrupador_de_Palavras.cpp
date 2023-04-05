/*Um arquivo de texto contém uma palavra por linha.
Escreva um programa que leia um arquivo e apresente suas palavras agrupadas de acordo com os comprimentos dessas palavras.
Obrigatoriamente deve ser usada uma tabela hash para realizar esta tarefa.
Listas somente podem ser usadas se forem obtidas a partir de operações da tabela hash.
Por exemplo, se o arquivo contiver estas palavras:

banana
ceu
mar
caju
pato
bola
... o resultado deve ser este:

ceu mar 
caju pato bola
banana
As linhas devem estar ordenadas de acordo com o comprimento de palavras.
As palavras de cada linha devem aparecer na ordem alfabética caso o comprimento seja igual.

*/


#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <unordered_map>

using namespace std;

// Indica para o sort que ele deve ordenar
bool compara_par (const pair<string,int> & p1, const pair<string,int> & p2) {
    if (p1.second == p2.second) {
        return p1.first < p2.first;
    }
    return p1.second < p2.second;
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

    // Cria uma tabela hash com palavras e seus comprimentos
    unordered_map<string,int> totais;

    string palavra;
    while (arq >> palavra) {
        // associa uma palavra com seu tamanho
        totais[palavra] += palavra.size();
    }

    // Transforma a tabela hash em uma lista
    list <pair<string,int>> lista (totais.begin(), totais.end());

    // Ordena por comprimento
    lista.sort(compara_par);

    // Imprime palavras
    int aux = 0;
    bool primeira_palavra = true;
    for (auto & dado: lista) {

        // Imprime a palavra na linha se ela for da mesma qt de palavras
        if (dado.second == aux) {
            cout << dado.first << ' ';
            primeira_palavra = false;
        } else {

            // Se não for a primeira palavra, quebra de linha
            if (!primeira_palavra) {
                cout << endl;
                cout << dado.first << ' ';
            } else {
                // Se for a primeira palavra, imprime
                cout << dado.first << ' ';
            }
        }

        // Atualiza variável auxiliar
        aux = dado.second;
    }

    return 0;
}
