#include <stdio.h>

int somar_vetor (int *vetor, int tamanho)
{
    int soma = 0; // Inicializa a soma como 0

    for (int i = 0; i < tamanho; i++)
    {
        soma += *(vetor + i); // Adiciona o elemento atual à soma
    }

    return soma; // Retorna a soma total
}


int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int soma = somar_vetor(vetor, tamanho); // Chama a função para somar os elementos do vetor

    printf("A soma dos elementos do vetor e: %d\n", soma); // Imprime a soma total
    

    return 0;
}