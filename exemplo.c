#include <stdio.h>

void hanoi(int n, char origem, char auxiliar, char destino)
{
    if (n > 0)
    {
        hanoi(n - 1, origem, auxiliar, destino);
        printf("Mover disco de %c para %c\n", origem, destino);
        hanoi(n - 1, auxiliar, destino, origem); 
    }
}

int main()
{
    hanoi(4, 'A', 'B', 'C');
    return 0;
}