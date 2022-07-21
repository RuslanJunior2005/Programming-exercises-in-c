// a) Trovate l’errore. (Nota: vi può essere più di un errore.)
#include <stdio.h>
int main()
{
    // a) Trovate l’errore. (Nota: vi può essere più di un errore.)
    /*for (int x = 100; x <= 1; x++)
        printf("%d\n", x);*/
    // in questo for mancavano i due punti allinterno delle parentesi  la inilizazione della variabile x  e l'icremento.

    // b) Il seguente codice deve stampare un messaggio che dice se un dato numero intero è dispari o pari:
    int value = 0;
    printf("inserisci un valore: ");
    scanf("%d", &value);
    switch (value % 2) {
    case 0:
    puts("il valore che hai inserito è pari");
    case 1:
    puts("il valore che hai inserito è dispari");
}
}
