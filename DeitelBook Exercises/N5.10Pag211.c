#include <stdio.h>
#include <math.h>
int main()
{
    float valore = 0;
    float risultato = 0;
    char risposta = ' ';

    risposta = 'S';

    while (risposta == 'S')
    {

        printf("inserisci il valore da arrotondre: ");
        scanf("%f", &valore);

        risultato = floor(valore);

        printf("%f", risultato);
        

        printf("\nvuoi continuare si o no S|N? ");
        scanf("%s", risposta);
    }
}
