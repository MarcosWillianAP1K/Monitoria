#include <stdio.h>

// Função para trocar dois elementos no vetor
void trocar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função que particiona o vetor e retorna o índice do pivô
int particionar(int vetor[], int inicio, int fim)
{
    int pivo = vetor[fim]; // Escolhe o último elemento como pivô
    int i = (inicio - 1);  // Índice do menor elemento

    for (int j = inicio; j <= fim - 1; j++)
    {
        // Se o elemento atual é menor ou igual ao pivô
        if (vetor[j] <= pivo)
        {
            i++; // Incrementa o índice do menor elemento
            trocar(&vetor[i], &vetor[j]);
        }
    }
    trocar(&vetor[i + 1], &vetor[fim]);
    return (i + 1);
}

// Função principal do QuickSort
void quickSort(int vetor[], int inicio, int fim)
{
    if (inicio < fim)
    {
        // Encontra o índice de particionamento
        int pi = particionar(vetor, inicio, fim);

        // Ordena os elementos antes e depois da partição
        quickSort(vetor, inicio, pi - 1);
        quickSort(vetor, pi + 1, fim);
    }
}

// Função para imprimir o vetor
void imprimirVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

// Função principal
int main()
{
    int vetor[] = {64, 34, 25, 12, 22, 11, 90};
    // Sizeof conta a quantidade de bytes do vetor e divide pelo tamanho de um elemento, o que resulta no número de elementos
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original: ");
    imprimirVetor(vetor, tamanho);

    quickSort(vetor, 0, tamanho - 1);

    printf("Vetor ordenado: ");
    imprimirVetor(vetor, tamanho);

    return 0;
}