#include <stdio.h>

int temPar(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            return 1; // Encontrou um par
        }
    }

    return 0; // Não encontrou
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

    int resultado = temPar(vetor, n);

    printf("Contém número par: %d\n", resultado);
    
    return 0;
}