// Ajustador de texto
/* Escreva um programa que leia um texto curto do teclado (ex: um nome completo, ou um endereço residencial),
e faça com que a inicial de cada palavra seja maiúscula.
Por exemplo, se o texto for "rua José lino kretzer", o programa deve apresentar "Rua José Lino Kretzer". */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função que converte letra para maiúsculo
void maiusculo (char str[100])
{
    int i;

    for (i = 0; i < strlen(str); i++)
    {
        if(i == 0 || str[i - 1] == ' ') 
            str[i] = toupper(str[i]);
    }
}

int main()
{
    char str[100];
    int tam_str;

    printf("Entre com o nome:\n");
    fgets(str, 100, stdin);

    maiusculo(str);

    printf("%s\n", str);

    return 0;
}
