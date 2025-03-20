#include <stdio.h>

//Como funciona a recursão?


void funcao_recursiva(int numero)
{
    if (numero == 0)
    {
        printf("%d ", numero);
    }
    else
    {
        printf("%d ", numero);
        funcao_recursiva(numero - 1);
        printf("%d ", numero);
    }
}


int main()
{
    //Exemplo, printe um numero positivo de forma decresente e depois crescente, tipo 5 = 5 4 3 2 1 0 1 2 3 4 5

    int numero = 5;

    funcao_recursiva(numero);

    return 0;
}