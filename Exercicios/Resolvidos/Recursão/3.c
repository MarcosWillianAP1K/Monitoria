
#include <stdio.h>
#include <string.h>


int verificar_se_e_palindromo(char texto[], int inicio, int fim)
{
    int resultado = 1;

    if (inicio < fim)
    {
        resultado = verificar_se_e_palindromo(texto, inicio + 1, fim - 1);

        if (texto[inicio] != texto[fim])
        {
            resultado = 0;
        }

    }

    return resultado;
}


int main ()
{

    char texto[] = "radar";
    int tamanho = strlen(texto);

    if (verificar_se_e_palindromo(texto, 0, tamanho - 1) == 1)
    {
        printf("E palindromo\n");
    }
    else
    {
        printf("Nao e palindromo\n");
    }


    return 0;
}






