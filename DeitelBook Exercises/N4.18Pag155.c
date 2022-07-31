#include <stdio.h>
int main()
{
    int numeroAsterischi = 0;
    int NumeroInserito = 0;
    printf("quanti numeri voi inserire? ");
    scanf("\n%d", &NumeroInserito);

    for (int i = 0; i < NumeroInserito; i++)
    {
        printf("\ninserisci un numero che corrisponde al numero dei sterischi: ");
        scanf("\n%d", &numeroAsterischi);
        for (int k = 0; k < numeroAsterischi; k++)
            printf("*");
    }
}