#include <stdio.h>
#include <string.h>

// int contador_de_vogais(char palavra[], int tamanho)
// {
//     int contador = 0;

//     if (tamanho != 0)
//     {

//         if (palavra[tamanho - 1] == 'a' || palavra[tamanho - 1] == 'e' || palavra[tamanho - 1] == 'i' || palavra[tamanho - 1] == 'o' || palavra[tamanho - 1] == 'u')
//         {
//             contador++;
//         }

//         contador += contador_de_vogais(palavra, tamanho - 1);
//     }

//     return contador;
// } 


void contador_de_vogais(char palavra[], int tamanho, int *contador)
{

    if (tamanho != 0)
    {

        if (palavra[tamanho - 1] == 'a' || palavra[tamanho - 1] == 'e' || palavra[tamanho - 1] == 'i' || palavra[tamanho - 1] == 'o' || palavra[tamanho - 1] == 'u')
        {
            *contador += 1;
        }

        contador_de_vogais(palavra, tamanho - 1, contador);
    }

} 

int main()
{

    char palavra[] = "Marcos Willian";
    int tamanho = strlen(palavra);
    int contador = 0;

    // int quantidade_de_vogais = 0;

    // quantidade_de_vogais = contador_de_vogais(palavra, tamanho);

    contador_de_vogais(palavra, tamanho, &contador);


    // printf ("Quantidade de vogais: %d", quantidade_de_vogais);

    printf ("Quantidade de vogais: %d", contador);



    return 0;
}