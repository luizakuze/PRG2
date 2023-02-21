# Procura uma palavra
O programa procura uma palavra dentro de um arquivo e imprime as linhas que não tiverem essa palavra.

## Com linha de Comando
```
#include <iostream>
#include <string>
#include <fstream>
#include <errno.h>

using namespace std;

int main(int argc, char *argv[])
{
    // Abre o arquivo que tem esse diretório
    ifstream arq(argv[1]);

    // Verifica se o arquivo foi mesmo aberto
    if (! arq.is_open()){
        perror("Ao abrir C:/Users/Luiza/Estudo_C/texto.txt");
        return errno;
    }

    string linha;

    // Lê cada linha do arquivo
    while (getline(arq, linha)) {

        // Procura a substring dentro do texto usando o find
        // Procura enquanto o texto não terminar (string::npos)
        if(linha.find(argv[2]) != string::npos)
            cout << linha << endl;
    }


    return 0;
}
```

## Sem linha de Comando
```
#include <iostream>
#include <string>
#include <fstream>
#include <errno.h>

using namespace std;

int main()
{
    string seq_caracter;
    cin >> seq_caracter;

    // Abre o arquivo que tem esse diretório
    ifstream arq("C:/Users/Luiza/Estudo_C/texto.txt");

    // Verifica se o arquivo foi mesmo aberto
    if (! arq.is_open()){
        perror("Ao abrir C:/Users/Luiza/Estudo_C/texto.txt");
        return errno;
    }

    string linha;

    // Lê cada linha do arquivo
    while (getline(arq, linha)) {

        // Procura a substring dentro do texto usando o find
        // Procura enquanto o texto não terminar (string::npos)
        if(linha.find(seq_caracter) != string::npos)
            cout << linha << endl;
    }


    return 0;
}
```
