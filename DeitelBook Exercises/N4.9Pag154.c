#include <stdio.h>

int main()
{
    int numero = 0;
    int numeroInserito = 0;
    int sommaNumeri = 0;

    printf("quanti numeri voi sommare? ");
    scanf("%d", &numero);

    for (int i = 0; i < numero; i++)
    {
        printf("inserisci il %d numero: ", i);
        scanf("%d", &numeroInserito);
        sommaNumeri += numeroInserito;
    }
    
printf("%d",sommaNumeri);
}