#include <stdio.h>

int buscaLinear(int vetor[], int tamanho, int alvo)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == alvo)
        {
            return i; // Retorna o índice da primeira ocorrência
        }
    }
    return -1; // Não encontrado
}

int main()
{
    int n, alvo;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Elementos: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Valor a procurar: ");
    scanf("%d", &alvo);

    int resultado = buscaLinear(vetor, n, alvo);

    printf("Índice da primeira ocorrência: %d\n", resultado);
    
    return 0;
}