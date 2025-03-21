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