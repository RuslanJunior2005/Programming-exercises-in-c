#include <stdio.h>
#include <stdlib.h>
int qualityPoints(int x);

int main()
{
    int voto = 0;
    int valore = 0;

    printf("inserisci un voto tra 1 e 100: ");
    scanf("%d", &voto);

    valore = qualityPoints(voto);

    printf("%d", valore);

    return 0;
}

int qualityPoints(int x)
{

    int y = 0;
    int voto = x;

    if (voto <= 60)
        y = 0;
    else if (voto >= 60 && voto <= 69)
        y = 1;
    else if (voto >= 70 && voto <= 79)
        y = 2;
    else if (voto >= 80 && voto <= 89)
        y = 3;
    else if (voto >= 90 && voto <= 100)
        y = 4;
    return y;
}