// Fig. 6.7: fig06_07.c
// Analisi di un sondaggio di studenti.
#include <stdio.h>
// definisci le dimensioni degli array
#define RESPONSES_SIZE 40 
#define FREQUENCY_SIZE 11

// la funzione main inizia l'esecuzione del programma
int main(void)
{
    // inizializza i contatori per le frequenze a 0
    int frequency[FREQUENCY_SIZE] = {0};

    // inserisci le risposte del sondaggio nell'array delle risposte
    int responses[RESPONSES_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
                                     1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
                                     5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    // per ogni risposta, seleziona il valore di un elemento dell'array
    // responses e usa quel valore come indice nell'array frequency per
    // determinare l'elemento da incrementare
    for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer)
    {
        ++frequency[responses[answer]];
    }
    // stampa i risultati
    printf("%s%17s\n", "Rating", "Frequency");

    // stampa le frequenze in un formato tabellare
    for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating)
    {
        printf("%6d%17d\n", rating, frequency[rating]);
    }
}