#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dividendo;
    int divisor;
} Racional;

int main()
{
    int i;
    float resultado;
    Racional R;

    for (i = 0; i < 2; i++)
    {
        printf("Digite o dividendo: ");
        scanf("%d", &R.dividendo);
        printf("Digite o divisor: ");
        scanf("%d", &R.divisor);
        printf("%d / %d = %d\n", R.dividendo, R.divisor, R.dividendo / R.divisor);
    }

    resultado = R.dividendo / R.divisor;

    printf("Resultado: %d\n", resultado);

    return 0;
}
