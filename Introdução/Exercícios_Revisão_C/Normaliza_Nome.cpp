// Normaliza o nome 
// O programa deixa um nome, por exemplo, dá seguinte forma: "Luiza Kuze" vira "Kuze, Luiza"
// O último nome vai para frente

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Normaliza o nome de uma pessoa
string normaliza(string & nome)
{
    string sobrenome;

    int i, j;
    int tam_nome = nome.size();

    // Encontra qual é o sobrenom (última palavra)
    for (i = tam_nome - 1, j = 0; nome[i] != ' '; i--, j++)
        sobrenome = sobrenome + nome[i];

    reverse(sobrenome.begin(), sobrenome.end());

    // Retira o sobrenome do nome completo
    for (i = tam_nome - 1; nome[i] != ' '; i--) {
        nome.erase(i);
    }

    return sobrenome + ", " + nome;

}

int main ()
{
    string nome;

    getline(cin, nome);

    cout << normaliza(nome);

    return 0;
}
