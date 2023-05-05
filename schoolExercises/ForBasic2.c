#include <stdio.h>
int main() {
// dichiarazione variabile N
int N;
// visualizzazione della richiesta
printf("Inserisci un numero intero positivo: ");
scanf("%d", &N);
// verifica sei il numero non è posistivo
if (N < 0) {
printf("Il numero inserito non è positivo.\n");
}
for (int i = N; i >= 0; i--) {
printf("%d\n", i);
}
return 0;
}
