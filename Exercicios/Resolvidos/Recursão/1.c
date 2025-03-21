#include <stdio.h>
#include <string.h>


//maneira 1

int contador_de_vogal_recursivo(char nome[], int tamanho)
{
    int contador = 0;

    if (tamanho != 0)
    {

        if (nome[tamanho - 1] == 'a' || nome[tamanho - 1] == 'e' || nome[tamanho - 1] == 'i' || nome[tamanho - 1] == 'o' || nome[tamanho - 1] == 'u')
        {
            contador++;
        }

        contador += contador_de_vogal_recursivo(nome, tamanho - 1);


    }

    return contador;
}

int main ()
{


    char nome[] = "Meu nome e";
    int tamanho = strlen(nome);
    int quantidade_de_vogais = 0;

    quantidade_de_vogais = contador_de_vogal_recursivo(nome, tamanho);

    printf("Quantidade de vogais: %d\n", quantidade_de_vogais);



    return 0;
}




//maneira 2

int contador_de_vogal_recursivo2(char *nome)
{

    if (*nome != '\0')
    {
        if (*nome == 'a' || *nome == 'e' || *nome == 'i' || *nome == 'o' || *nome == 'u')
        {
            return 1 + contador_de_vogal_recursivo2(nome + 1);
        }
        else
        {
            return contador_de_vogal_recursivo2(nome + 1);
        }
    }
    else
    {
        return 0;
    }

}


int main ()
{

    char nome[] = "Meu nome e";
    int quantidade_de_vogais = 0;

    quantidade_de_vogais = contador_de_vogal_recursivo2(nome);

    printf("Quantidade de vogais: %d\n", quantidade_de_vogais);



    return 0;

}



