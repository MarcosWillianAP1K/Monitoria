#include <stdio.h>


typedef struct exemplo
{
    int besteira;
    
}exemplo;


union conteudo
{
    int dado1;
    double dado2;
    char dado3;
}conteudo;


typedef struct lista_encadeada
{
    union conteudo dados;

    struct lista_encadeada *proximo;


}lista_encadeada;





int main ()
{



    return 0;
}