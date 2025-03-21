
#include <stdio.h>
#include <string.h>

//Maneira 1
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


//Maneira 2


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int inverter_string(char string[], int inicio, int fim)
{
    if ( inicio < fim)
    {
        if ( string[inicio] != string[fim])
        {
            return 1;
        }

        return inverter_string(string, inicio +1, fim -1);

    }

    return 0;

}



int main ()
{
    char string[] = "invertida";
    int tam = strlen(string);
    
    if (inverter_string(string, 0, tam - 1) == 0)
    {
        printf("É um palidromo");

    }
    else{
        printf ("Nao e palidromo");
    }

    

    return 0;
}




