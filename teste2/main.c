#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia, mes, ano;
} Data;

int bissexto(int ano)
{
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    Data data1, data2;

    printf("Coloque data incial no formato: dia/mes/ano\n");
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
    printf("Coloque data final no formato: dia/mes/ano\n");
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

    int dias = 0;

    if (data1.ano == data2.ano)
    {
        if (data1.mes == data2.mes)
        {
            dias = data2.dia - data1.dia;
        }
        else
        {
            if (data1.mes == 1 || data1.mes == 3 || data1.mes == 5 || data1.mes == 7 || data1.mes == 8 || data1.mes == 10 || data1.mes == 12)
            {
                dias = 31 - data1.dia;
                dias += data2.dia;
            }
            else
            {
                if (data1.mes == 4 || data1.mes == 6 || data1.mes == 9 || data1.mes == 11)
                {
                    dias = 30 - data1.dia;
                    dias += data2.dia;
                }
                else
                {
                    if (data1.mes == 2)
                    {
                        if (bissexto(data1.ano))
                            dias = 29 - data1.dia;
                        else
                            dias = 28 - data1.dia;
                        dias += data2.dia;
                    }
                }
            }
        }
    }
    else
    {
        if (data1.ano == data2.ano - 1)
        {
            if (data1.mes == 1 || data1.mes == 3 || data1.mes == 5 || data1.mes == 7 || data1.mes == 8 || data1.mes == 10 || data1.mes == 12)
            {
                dias = 31 - data1.dia;
                dias += data2.dia;
            }
            else
            {
                if (data1.mes == 4 || data1.mes == 6 || data1.mes == 9 || data1.mes == 11)
                {
                    dias = 30 - data1.dia;
                    dias += data2.dia;
                }
                else
                {
                    if (data1.mes == 2)
                    {
                        if (bissexto(data1.ano))
                            dias = 29 - data1.dia;
                        else
                            dias = 28 - data1.dia;
                        dias += data2.dia;
                    }
                }
            }
        }
    }

    printf("%d dias\n", dias);

    return 0;
}
