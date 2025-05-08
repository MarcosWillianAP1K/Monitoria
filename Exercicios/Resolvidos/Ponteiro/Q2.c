#include <stdio.h>

short int qual_numero_e_maior(short int *numero1, short int *numero2)
{
    short int resultado = 0;

    if (*numero1 > *numero2)
    {
        resultado = 1;
    }
    else if (*numero1 < *numero2)
    {
        resultado = 2;
    }
    

    return resultado;
}

int main()
{
    int numero1 = 10;
    int numero2 = 20;

    short int resultado = qual_numero_e_maior(&numero1, &numero2);

   if (resultado == 1)
    {
        printf("O primeiro numero e maior\n");
    }
    else if (resultado == 2)
    {
        printf("O segundo numero e maior\n");
    }
    else
    {
        printf("Os numeros sao iguais\n");
    }
    

    return 0;
}