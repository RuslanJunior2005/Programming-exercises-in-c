#include <stdio.h>
int main() {
// dichiarazione varibile N
int N;
// richiesta valore
printf("Inserisci un numero intero positivo: ");
scanf("%d", &N);
// verifica se il numero non è positivo
if (N < 0) {
printf("Il numero inserito non è positivo.\n");
}
// stampa
for (int i = 0; i <= N; i += 2) {
printf("%d\n", i);
}
return 0;
}
