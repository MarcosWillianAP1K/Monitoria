#include <stdio.h>

int encontrar_maior(int *vetor, int tamanho)
{
    int maior = *vetor; // Inicializa o maior com o primeiro elemento do vetor

    for (int i = 1; i < tamanho; i++)
    {
        if (*(vetor + i) > maior)
        {
            maior = *(vetor + i); // Atualiza o maior se encontrar um elemento maior
        }
    }

    return maior;
    
}


int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int maior = encontrar_maior(vetor, tamanho);

    printf("O maior elemento do vetor e: %d\n", maior);

    
    return 0;
}