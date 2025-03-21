#include <stdio.h>
#include <string.h>


//Maneira 1

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



//Maneira 2

void inverter_string2(char *s, char texto_invertido[])
{
    if (*s != '\0')
    {
        inverter_string2(s + 1, texto_invertido);
    
        strncat(texto_invertido, s, 1);
    }
    else
    {
        texto_invertido[0] = '\0';
    }

}

int main()
{
    char texto[] = "alo voce";
    int tamanho = strlen(texto);
    char texto_invertido[tamanho];

    inverter_string2(texto, texto_invertido);

    printf("%s\n", texto_invertido);

    return 0;
}