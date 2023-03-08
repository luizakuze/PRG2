#include <iostream>
#include "questao.h"


int main()
{
    string caminho;
    getline(cin, caminho);

    caminho = reduz_caminho(caminho);
    cout << caminho << endl;

    return 0;
}
