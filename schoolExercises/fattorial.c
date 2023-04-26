#include <stdio.h>

int main() {
    int n;
    int fattoriale = 1;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fattoriale += i;
    }

    printf("Il fattoriale di %d è %d", n, fattoriale);

    return 0;
}
