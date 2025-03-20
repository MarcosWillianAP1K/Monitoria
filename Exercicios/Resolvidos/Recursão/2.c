#include <stdio.h>
#include <string.h>

void inverter_string(char *s, int inicio, int fim)
{
    if (inicio < fim)
    {

        char temp = s[inicio];
        s[inicio] = s[fim];
        s[fim] = temp;

        inverter_string(s, inicio + 1, fim - 1);
    }
}

int main()
{
    char texto[] = "alo voce";
    int tamanho = strlen(texto);

    inverter_string(texto, 0, tamanho - 1);

    printf("%s\n", texto); 

    return 0;
}
