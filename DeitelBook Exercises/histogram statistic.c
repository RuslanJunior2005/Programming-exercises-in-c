// Fig. 6.8: fig06_08.c
// Stampa di un istogramma.
#include <stdio.h>
#define SIZE 5

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    // usa la lista di inizializzatori per inizializzare l'array n
    int n[SIZE] = {19, 3, 15, 7, 11};

    printf("%s%13s%17s\n", "Element", "Value", "Histogram");

    // per ogni elemento dell'array n, stampa una barra dell'istogramma
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%7u%13d ", i, n[i]);

        for (int j = 1; j <= n[i]; ++j)
        { // stampa una barra
            printf("%c", '*');
        }

        puts(""); // termina la barra dell'istogramma con un newline
    }
}