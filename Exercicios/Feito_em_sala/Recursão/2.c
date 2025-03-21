#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void inverter_string(char string[], int inicio, int fim)
{
    if ( inicio < fim)
    {
        char aux = string[fim];
        string[fim] = string[inicio];
        string[inicio] = aux;

        inverter_string(string, inicio +1, fim -1);

    }



}



int main ()
{
    char string[] = "invertida";
    int tam = strlen(string);
    
    inverter_string(string, 0, tam - 1);

    printf("%s", string);


}