/* Um arquivo contém todos os números de matrículas de alunos de um curso.
Em outro arquivo, estão as matrículas dos alunos que realizaram matrícula para um novo semestre.
A coordenação de curso deseja identificaram todos os alunos que NÃO renovaram suas matrículas.

Escreva um programa que ajude a coordenação nessa tarefa.
Seu programa deve receber o nome do arquivo com todos os alunos, seguido do nome do arquivo com os alunos que renovaram matrícula,
respectivamente no primeiro e segundo argumentos de linha de comando.

O resultado da execução de seu programa deve ser as matrículas dos alunos que não renovaram matrícula.*/

#include <iostream>
#include <list>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    // Abre arquivo1 com todas as matrículas
    ifstream arq1(argv[1]);
    if (!arq1.is_open()) {
        cerr << "Erro: não foi possível abrir o arquivo " << argv[1] << endl;
        return 1;
    }

    // Abre arquivo2 com quem fez a matrícula
    ifstream arq2(argv[2]);
    if (!arq2.is_open()) {
        cerr << "Erro: não foi possível abrir o arquivo " << argv[2] << endl;
        return 1;
    }

    // Armazena alunos que não fizeram matrícula
    list <string> nao_fez_m;

    // Para cada matrícula de aluno
    string m;
    while (arq1 >> m) {

        bool tem_matricula_igual = false;

        // Verifica se matrícula foi feita
        string fez_m;
        while(arq2 >> fez_m) {

            // Se achar um aluno que fez a matrícula
            if (m == fez_m) {
                tem_matricula_igual = true;
                break;
            }
        }

        // Se não encontrar a matrícula do aluno
        if (!tem_matricula_igual)
            nao_fez_m.push_back(m);
    }

    // Imprime na tela alunos que não fizeram a matrícula
    for (const string & matricula : nao_fez_m) {
        cout << matricula << ' ';
    }
    cout << endl;

    return 0;
}
