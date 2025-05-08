#include <stdio.h>

void inverter_vetor(int *vetor, int tamanho)
{
    int *p_vetor_inicio = vetor; // ponteiro para o vetor
    int *p_vetor_fim = vetor + tamanho - 1; // ponteiro para o último elemento do vetor

    while (p_vetor_inicio < p_vetor_fim)
    {
        int temp = *p_vetor_inicio;
        *p_vetor_inicio = *p_vetor_fim;
        *p_vetor_fim = temp;

        p_vetor_inicio++;
        p_vetor_fim--;
    }
}


int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original: ");
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n\n");

    printf("Vetor invertido: ");

    inverter_vetor(vetor, tamanho);
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}