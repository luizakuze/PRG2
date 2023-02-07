// Previsor de tempo

#include <stdio.h>
#include <string.h>

int main()
{
    char barometro[15], termometro[15];
    int tam_barometro, tam_termometro;

    printf("Entre com o barômetro:\n");
    scanf("%s", barometro);
    printf("Entre com o termômetro:\n");
    scanf("%s", termometro);

    tam_barometro = strlen(barometro);
    tam_termometro = strlen(termometro);

    // barometro subindo
    if (tam_barometro == 7) {

        // condições termometro
        if (tam_termometro == 7) 
            printf("Tempo bom, ventos quentes e secos\n");
        else if (tam_termometro == 12)
            printf("Tempo bom, ventos de leste frescos\n");
        else if (tam_termometro == 8)
            printf("Tempo bom, ventos de sul a sudeste\n");
            
    }

    // barometro estacionário
    else if (tam_barometro == 12) {

        // condições termometro
        if (tam_termometro == 7) 
            printf("Tempo mudando para bom, ventos de leste\n");
        else if (tam_termometro == 12)
            printf("Tempo incerto, ventos variáveis\n");
        else if (tam_termometro == 8)
            printf("Chuva provável, ventos de sul a sudeste\n");

    }

    // barometro baixando
    else if (tam_barometro == 8) {

        // condições termometro
        if (tam_termometro == 7) 
            printf("Tempo minstávfel, aproximação de frente\n");
        else if (tam_termometro == 12)
            printf("Frente quente com chuvas prováveis\n");
        else if (tam_termometro == 8)
            printf("Chuvas abundantes e ventos de sul a sudoestes fortes\n");

    }

    return 0;
}
