## Contar linhas, palavras e caracteres de um arquivo

## Com linha de comando
```
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

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
        qt_caracter+= linha.size();


        bool na_palavra = false;

        // Percorre toda a linha
        for (char c : linha) {

            // Verifica se o caracter da linha é um espaço
            if (isalpha(c)) {

                // Se encontrar um caracter
                if(!na_palavra) {
                    qt_palavras++;
                    na_palavra = true;
                
                // Se for um espaço    
                } else {
                    na_palavra = false;
                }
            }
        }

    }

    cout << qt_linhas << ' ' << qt_palavras << ' ' << qt_caracter << endl;

    return 0;
}
```

## Sem linha de comando
Essa segunda forma é uma outra abordagem do problema, menos compacto.
```
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    // Abre o arquivo que tem esse diretório
    ifstream arq("C:/Users/Luiza/Estudo_C/texto.txt");

    // Verifica se o arquivo foi mesmo aberto
    if (! arq.is_open()){
        perror("Ao abrir C:/Users/Luiza/Estudo_C/texto.txt");
        return errno;
    }

    string linha;
    int qt_linhas = 0, qt_palavras = 0, qt_caracter = 0;

    // Percorre cada palavra do arquivo
    while (arq >> linha) {
        qt_palavras++;
    }

    // Reinicia a leitura do arquivo
    arq.clear(); // limpa sinalizações de erro
    arq.seekg(0, ios::beg); // define a posição do ponteiro de leitura


    // Lê cada linha do arquivo
    while (getline(arq, linha)) {

        // Soma 1 a cada linha
        qt_linhas++;

        // Add o tamanho da string, para o tamanho de caracteres
        qt_caracter+= linha.size();
    }

    cout << qt_linhas << ' ' << qt_palavras << ' ' << qt_caracter << endl;

    return 0;
}

```
