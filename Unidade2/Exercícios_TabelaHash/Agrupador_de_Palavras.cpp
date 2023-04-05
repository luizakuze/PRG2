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
As palavras de cada linha devem aparecer na ordem em que foram lidas do arquivo.

O nome do arquivo de palavras é fornecido como primeiro argumento de linha de comando.
Se o arquivo não puder ser aberto, esta mensagem de erro deve ser apresentada:

Arquivo invalido
*/

#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <unordered_map>

using namespace std;

// FUnção que indica para o sort que ele deve ordenar pela quantidade de palavras
bool compara_par (const pair<string,int> & p1, const pair<string,int> & p2) {

    // Se tiverem a mesma quantidade de caracteres
    if(p1.second == p2.second) {
        return p1.first < p2.first;
    }
    // Ordena decrescente
    return p1.second > p2.second;
}

int main(int argc, char *argv[])
{
    // Abre arquivo para leitura
    ifstream arq (argv[1]);

    // Cria um conjunto com palavras e suas quantidades
    unordered_map<string,int> totais;

    // Adiciona cada dado do arquivo ao conjunto
    // O conjunto contém somente dados únicos
    string palavra;

    // Conta as palavras
    while (arq >> palavra) {
            totais[palavra]++;
    }

    // Cria uma lista com palavras e número de repetições
    list<pair<string,int>> resultado (totais.begin(), totais.end());

    // Como é a forma de comparar
    resultado.sort(compara_par);

    // Imprime dados
    int cont = 0;
    for (auto &dado: resultado) {
        // Verifica se já imprimiu x vezes
        if (cont == stoi(argv[2])) {
            break;
        } else {
            cout << dado.first << ' ' << dado.second << endl;
            cont++;
        }
    }

    return 0;
}
