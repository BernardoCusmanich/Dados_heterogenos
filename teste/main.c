#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[20];
    int idade, peso;

} Pessoa;

int main()
{
    int i;
    Pessoa P[3];

    for (i = 0; i < 100; i++)
    {
        printf("Digite o nome da pessoa: ");
        scanf("%s", P[i].nome);
        printf("Digite a idade da pessoa: ");
        scanf("%d", &P[i].idade);
        printf("Digite o peso da pessoa: ");
        scanf("%d", &P[i].peso);
    }

    for (i = 0; i < 100; i++)
    {
        if (P[i].idade < 18 && P[i].peso > 70)
        {
            printf("\n%s", P[i].nome);
        }
    }

    return 0;
}
