#include <stdio.h>

int contarOcorrencias(int vetor[], int tamanho, int alvo)
{
    int contador = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == alvo)
        {
            contador++;
        }
    }
    return contador;
}

int main()
{
    int vetor[10], alvo;

    printf("Elementos: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Número alvo: ");
    scanf("%d", &alvo);

    int resultado = contarOcorrencias(vetor, 10, alvo);

    printf("O número %d aparece %d vezes\n", alvo, resultado);
    
    return 0;
}