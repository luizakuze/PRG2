// Um ajustador de texto

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função que converte letra para maiúsculo
void maiusculo (char str[100])
{
    for (int i = 0; i < strlen(str); i++)
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
