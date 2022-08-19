#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#define SIZE 7
 // la funzione main inizia l'esecuzione del programma
int main(void)
{
    unsigned int frequency[SIZE] = {0}; // azzera i conteggi
    srand(time(NULL));                  // seme per il generatore di numeri casuali
                                        // lancia il dado 60.000.000 di volte
    for (unsigned int roll = 1; roll <= 60000000; ++roll)
    {
        size_t face = 1 + rand() % 6;
        ++frequency[face]; // sostituisce l'intero switch della Fig. 5.12
    }
    printf("%s%17s\n", "Face", "Frequency");
    // stampa gli elementi di frequency 1-6 in formato tabellare
    for (size_t face = 1; face < SIZE; ++face)
    {
        printf("%4d%17d\n", face, frequency[face]);
    }
    
}