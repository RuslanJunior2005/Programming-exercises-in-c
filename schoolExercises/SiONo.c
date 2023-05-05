#include <stdio.h>
int main() {
// inilizazzione e dichiarazione di sum , num . risposta (per SI e NO)
int num, sum = 0;
char risposta = 'S';
// struttura di controllo che permette di controllare l'inserimento del
numero intero( ho aggiunto la diferensazione tra 'S' e 's')
while (risposta == 'S' || risposta == 's' ) {
printf("Inserisci un numero: ");
scanf("%d", &num);
// somma dei numeri
sum += num;
// richiesta del inserimento (obligatorio)
printf("Vuoi inserire un altro numero? (S/N): ");
scanf(" %c", &risposta);
}
// stampa della somma fino a quel momento
printf("\nLa somma dei numeri inseriti è %d.\n", sum);
return 0;
}
