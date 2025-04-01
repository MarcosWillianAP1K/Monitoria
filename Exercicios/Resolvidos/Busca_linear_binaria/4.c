#include <stdio.h>

int ultimaOcorrencia(int vetor[], int tamanho, int alvo)
{
    int ultima = -1; // Inicializa como não encontrado

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == alvo)
        {
            ultima = i; // Atualiza o índice quando encontra
        }
    }
    return ultima;
}

int main()
{
    int vetor[15], alvo;

    printf("Elementos: ");

    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Valor alvo: ");
    scanf("%d", &alvo);

    int resultado = ultimaOcorrencia(vetor, 15, alvo);

    printf("Índice da última ocorrência: %d\n", resultado);
    
    return 0;
}