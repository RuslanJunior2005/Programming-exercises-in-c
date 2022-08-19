#include <stdio.h>

#define SIZE 5

void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main()
{
    int a[SIZE] = {0, 1, 2, 3, 4};

    puts("Effects of passing entire array by reference:\n\nThe "
         "values of the original array are:");

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }
    puts("");

    modifyArray(a, SIZE); // passa l'array "a" a modifyArray per riferimento
    puts("The values of the modified array are:");

    // stampa l'array modificato
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%3d", a[i]);
    }

    // stampa il valore di a[3]
    printf("\n\n\nEffects of passing array element "
           "by value:\n\nThe value of a[3] is %d\n",
           a[3]);

    modifyElement(a[3]); // passa l'elemento a[3] per valore

    // stampa il valore di a[3]
    printf("The value of a[3] is %d\n", a[3]);
}

// nella funzione modifyArray, "b" si riferisce all'array originario "a"
// in memoria
void modifyArray(int b[], size_t size)
{
    // moltiplica ogni elemento dell'array per 2
    for (size_t j = 0; j < size; ++j)
    {
        b[j] *= 2; // modifica in realtà l'array originario
    }
}

// nella funzione modifyElement, "e" e' una copia locale dell'elemento
// dell'array a[3] passato da main
void modifyElement(int e)
{
    // moltiplica il parametro per 2
    printf("Value in modifyElement is %d\n", e *= 2);
}
