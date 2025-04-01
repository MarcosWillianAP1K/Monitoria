#include <stdio.h>

int maiorElemento(int vetor[], int tamanho)
{
    int maior = vetor[0]; // Assume o primeiro como maior

    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    return maior;
}

int main()
{
    int n;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Elementos: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int resultado = maiorElemento(vetor, n);
    
    printf("Maior elemento: %d\n", resultado);

    return 0;
}