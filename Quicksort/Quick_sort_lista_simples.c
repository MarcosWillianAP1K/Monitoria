#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Estrutura para o nó da lista
typedef struct Lista_encadeada
{
    int dado;
    struct Lista_encadeada *proximo;
} Lista_encadeada;

// =====================IMPLEMENTAÇÃO DA LISTA ENCADEADA=====================

// Funções que é a o padrão da lista encadeada

// Função para verificar se a alocação de memória foi bem-sucedida
void verificar_alocacao(void *ptr)
{
    if (ptr == NULL)
    {
        // Se a alocação falhar, exibe uma mensagem de erro e encerra o programa
        printf("Erro ao alocar memória.\n");
        exit(EXIT_FAILURE);
    }
}

Lista_encadeada *criarNo(int dado)
{
    Lista_encadeada *novoNo = (Lista_encadeada *)malloc(sizeof(Lista_encadeada));

    verificar_alocacao(novoNo);

    novoNo->dado = dado;
    novoNo->proximo = NULL;
    return novoNo;
}

void inserir_fim_lista(Lista_encadeada **inicio, int dado)
{
    // Insere um novo nó no final da lista
    Lista_encadeada *novoNo = criarNo(dado);

    if (*inicio == NULL)
    {
        *inicio = novoNo; // Se a lista estiver vazia, o novo nó se torna o início
    }
    else
    {
        Lista_encadeada *temp = *inicio;
        while (temp->proximo != NULL)
        {
            temp = temp->proximo; // Percorre até o último nó
        }
        temp->proximo = novoNo; // O novo nó é adicionado ao final da lista
    }
}

void imprimir_lista(Lista_encadeada *inicio)
{
    Lista_encadeada *temp = inicio;

    while (temp != NULL)
    {
        printf("%d ", temp->dado);
        temp = temp->proximo;
    }
    printf("\n");
}

void liberar_lista(Lista_encadeada **inicio)
{
    Lista_encadeada *temp;

    while (*inicio != NULL)
    {
        temp = *inicio;
        *inicio = (*inicio)->proximo;
        free(temp);
    }
}

// =====================IMPLEMENTAÇÃO DO QUICK SORT=====================

void inserir_no_inicio_lista(Lista_encadeada **inicio, Lista_encadeada *novoNo)
{
    // Insere um novo nó no início da lista
    if (*inicio == NULL)
    {
        novoNo->proximo = NULL;
        *inicio = novoNo; // Se a lista estiver vazia, o novo nó se torna o início
    }
    else
    {
        novoNo->proximo = *inicio; // O novo nó aponta para o antigo início
        *inicio = novoNo;          // O novo nó agora é o início da lista
    }
}

Lista_encadeada *concatenar_listas(Lista_encadeada *inicio, Lista_encadeada *meio, Lista_encadeada *fim)
{
    Lista_encadeada *inicio_lista_contatenada = NULL;

    if (inicio != NULL)
    {
        // Caso possua algum elemento na variavel inicio, o inicio geral da lista sera atribuidad a ele.
        inicio_lista_contatenada = inicio;

        // Procura o ultimo elemento de inicio
        while (inicio->proximo != NULL)
        {
            inicio = inicio->proximo;
        }

        // Verifica qual deve ser o proximo, se n tiver meio, deve ir pro fim
        if (meio != NULL)
        {
            inicio->proximo = meio;
        }
        else
        {
            inicio->proximo = fim;
        }
    }

    if (meio != NULL)
    {
        // Se o inicio geral ainda for NULL, então que dizer que a variavel inicio é NULL, e nosso inicio deve ser a partir do meio.
        if (inicio_lista_contatenada == NULL)
            inicio_lista_contatenada = meio;

        // Procura o ultimo elemento do meio
        while (meio->proximo != NULL)
        {
            meio = meio->proximo;
        }

        // Atribui direto pro fim, não importa se é null ou não, ja que é o fim mesmo
        meio->proximo = fim;
    }

    // Ultima verificação, se ainda é NULL, então inicio e meio é NULL, logo vazio, então so atribui ao fim, mesmo que ele seja null não importa.
    if (inicio_lista_contatenada == NULL)
        inicio_lista_contatenada = fim;

    return inicio_lista_contatenada;
}

Lista_encadeada *quickSort(Lista_encadeada *inicio)
{

    if (inicio == NULL || inicio->proximo == NULL)
    {
        return inicio; // Lista vazia ou com apenas um elemento, já está ordenada
    }

    // Encontrar o pivô (usando o primeiro elemento como pivô)
    Lista_encadeada *pivo = inicio;
    Lista_encadeada *menor = NULL;
    Lista_encadeada *maior = NULL;

    // Particionar a lista em duas sublistas: menor e maior
    Lista_encadeada *atual = inicio->proximo;
    pivo->proximo = NULL;

    while (atual != NULL)
    {
        Lista_encadeada *temp = atual;
        atual = atual->proximo;

        if (temp->dado < pivo->dado)
        {
            inserir_no_inicio_lista(&menor, temp);
        }
        else
        {
            inserir_no_inicio_lista(&maior, temp);
        }
    }

    // Recursivamente ordenar as sublistas
    menor = quickSort(menor);
    maior = quickSort(maior);

    return concatenar_listas(menor, pivo, maior);
}


int main()
{
    Lista_encadeada *lista = NULL;

    //Preencher a lista com numeros aleatorios
    srand(time(NULL));
    for (int i = 0; i < 30; i++)
    {
        inserir_fim_lista(&lista, rand() % 100 + 1);
    }


    printf("\nLista original:\n");
    imprimir_lista(lista);

    lista = quickSort(lista);

    printf("\nLista ordenada:\n");
    imprimir_lista(lista);

    liberar_lista(&lista);
    printf("\nMemoria liberada\n");

    return 0;
}