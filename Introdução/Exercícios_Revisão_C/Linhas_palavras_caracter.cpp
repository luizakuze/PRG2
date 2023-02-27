## Contar linhas, palavras e caracteres de um arquivo

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Implementar a função!!
int conta_palavras(string linha) {
    
    
}

int main(int argc, char *argv[])
{
    // Abre o arquivo que tem esse diretório
    ifstream arq(argv[1]);

    // Verifica se o arquivo foi mesmo aberto
    if (! arq.is_open()){
        perror(argv[1]);
        return errno;
    }

    string linha;
    int qt_linhas = 0, qt_palavras = 0, qt_caracter = 0;

    // Lê cada linha do arquivo
    while (getline(arq, linha)) {

        // Soma 1 a cada linha
        qt_linhas++;

        // Add o tamanho da string, para o tamanho de caracteres
        // e +1 por conta do \n (quebra de linha)
        qt_caracter+= linha.size() + 1;

        qt_palavras = conta_palavras(linha);
        

    }

    cout << qt_linhas << ' ' << qt_palavras << ' ' << qt_caracter << endl;

    return 0;
}
