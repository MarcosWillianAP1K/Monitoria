#include <stdio.h>



void modificar_vetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        *vetor = 5 - i;
        vetor++;
    }
}



int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("tamanho do vetor: %d\n", tamanho);

    printf("\nvetor original: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }

    modificar_vetor(vetor, tamanho);

    printf("\n\nvetor modificado: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n\n");

    return 0;
}