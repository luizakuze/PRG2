#include "questao.h"

// Reduz o caminho original de um arquivo para o menor caminho possível
string reduz_caminho(const string & caminho)
{
    stack<string> pilha; // Armazena diretórios do caminho simplificado
    string substr; // Armazena diretórios do caminho completo
    int i = 0; // Caracteres do caminho completo

    // Lê o nome do caminho completo
    while (caminho[i] != '\0') {

        // Encontra uma barra
        if (caminho[i] == '/') {

            // Volta para o diretório anterior se encontrar /..
            if (substr == ".." && !pilha.empty())
                pilha.pop();

                // Ignora o diretório atual se encontrar /.
            else if (substr != "." && substr != "")
                pilha.push(substr);

            substr.clear();
        }
            // Caso não encontre barras, continua lendo
        else
            substr += caminho[i];

        i++;
    }

    // Se o caminho original ter // (diretório vazio),
    // adiciona uma string vazia na pilha para representação
    if (caminho[i - 1] == '/')
        pilha.push("");

        // Adiciona o último diretório (se existir) na pilha
    else if (substr != ".." && substr != ".") {
        pilha.push(substr);
    }

    string caminho2;

    // Armazena o conteúdo da pilha em uma
    // string formatada com as barras (/)
    while (! pilha.empty()) {
        caminho2 = "/" + pilha.top() + caminho2;
        pilha.pop();
    }

    // Se a pilha estiver vazia
    if (caminho2.empty())
        caminho2 = "/";

    return caminho2;
}
