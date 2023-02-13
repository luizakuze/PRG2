// Contador de palavras e caracteres
// O programa conta o número de letras e de palavras de uma frase

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;
    bool espaco = true;
    int qt_palavra = 0, qt_caract = 0;

    getline(cin, texto);

    for (int i = 0; i < texto.size(); i++) {

        //quantidade de caracteres
        qt_caract++;

        //quantidade de palavras
        if (texto[i] != ' ') {
            if (espaco) {
              qt_palavra++;
              espaco = false;
            }
        } else {
            espaco = true;
        }
        
    }

    cout << qt_palavra << ' ' << qt_caract << endl;

    return 0;
}
