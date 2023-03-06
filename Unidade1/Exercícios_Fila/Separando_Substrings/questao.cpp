#include "questao.h"

/* Passagem por valor = Sem '&', altera a variável somente na função.
 * Passagem por referência = Com '&', pega o endereço da variável e altera o valor da variável na função original.
 * Por referência, é mais rápido. Para strings, filas ou pilhas, passamos para referência já que são muitos elementos.
 * Nesse problema, o objetivo é só ter a eficiência e não alterar a variável na main. Então, colocamos o 'const' */
queue<string> separa(const string & algo, char sep)
{
    queue<string> fila_str; // Cria fila que armazena as palavras da string
    string substr; // Será uma palavra da string
    int i = 0;

    // Lê a string a ser analisada
    while (algo[i] != '\0') {

        // Encontra um separador
        if (algo[i] == sep) {

            // Se a string não estiver vazia, adicioina a palavra na fila
            if (!substr.empty()) {
                fila_str.push(substr);
                substr.clear();
            }

        /* Caso não encontre separador, continua lendo
         * as posições da string para dentro de uma substring */
        } else substr += algo[i];

        i++;
    }

    /* Na última palavra da string, não haverá separador,
     * já que a string vai terminar. Então o laço de repetição
     * assegura que a última string esteja na fila */
    if (!substr.empty())
        fila_str.push(substr);

    return fila_str;
}
