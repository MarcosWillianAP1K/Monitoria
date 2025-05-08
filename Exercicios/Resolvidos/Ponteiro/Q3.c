#include <stdio.h>


int main()
{
    char nome[20] = "Joao da Silva";
    char *p_nome = nome;
    char *p_nome2 = nome + 5; // aponta para o caractere 'd' em "Joao da Silva"

    printf("Nome: %s\n", p_nome);
    printf("Nome a partir do 5o caractere: %s\n", p_nome2);

    int tamanho = sizeof(nome) / sizeof(nome[0]);


    printf("Printar caracter por caracter:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%c ", *(p_nome + i)); // ou p_nome[i]
    }
    

    return 0;
}