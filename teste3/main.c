#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char modelo[3];
    int ano;
    float consumo;
} Carro;

int main()
{
    int i, economico = 0, me;
    Carro C[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite o modelo do carro: ");
        scanf("%s", &C[i].modelo);
        printf("Digite o ano do carro: ");
        scanf("%d", &C[i].ano);
        printf("Digite o consumo do carro: ");
        scanf("%f", &C[i].consumo);

        if (C[i].consumo < C[me].consumo)
        {
            me = i;
        }
    }

    printf("\nO carro mais economico eh: %s\nNo ano de: %d", C[me].modelo, C[me].ano);

    return 0;
}
