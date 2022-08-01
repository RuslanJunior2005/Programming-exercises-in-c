#include <stdio.h>
int main()
{
    int numero = 0;
    int decine = 0, unita = 0;
    char risposta = ' ';
    // richiesta
    printf("inserisci un numero che desideri concertire in numero romano: ");
    scanf("%d", &numero);
    // parte numerale

    decine = (int)numero / 10;
    unita = numero - (decine * 10);
    decine *= 10;
    printf("\n");
    risposta = 'V';
    while (risposta == 'V')
    {
        printf("\nvoi continuare si o no S|N: ");
        scanf("%c", &risposta);
        switch (decine)
        {
        case 10:
            printf("X");
            break;
        case 20:
            printf("XX");
            break;
        case 30:
            printf("XXX");
            break;
        case 40:
            printf("XL");
            break;
        case 50:
            printf("L");
            break;
        case 60:
            printf("LX");
            break;
        case 70:
            printf("LXX");
            break;
        case 80:
            printf("LXXX");
            break;
        case 90:
            printf("XC");
            break;
        }
        switch (unita)
        {
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
        }
    }
}
