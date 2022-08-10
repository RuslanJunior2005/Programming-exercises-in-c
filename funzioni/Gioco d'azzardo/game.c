#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// le constanti di enumerazione rapresentano lo stato del gioco
enum Status
{
    CONTINUE,
    WON,
    LOST
};
// prototipo della funzione
int rollDice(void);

int main()
{

    int myPoint; // il giocatore deve fare questo punteggio per vincere

    srand(time(NULL)); // generatore dei numeri casuali

    enum Status gameStatus; // può contenere CONTINUE,WON, o LOST
    int sum = rollDice();   // primo lancio dei dati

    // determina lo stato del gioco in base alla somma dei dati
    switch (sum)
    {
    // si vince al primo lancio
    case 7:  // si vince con 7
    case 11: // si vince con 11
        gameStatus = WON;
        break;
    // si perde con il primo lancio
    case 2:  // si perde con il 2
    case 3:  // si perde con 3
    case 12: // si perde con 12
        gameStatus = LOST;
        break;
        // ricorda il punteggio
    default:
        gameStatus = CONTINUE;                     // il giocatore contuna a lanciare
        myPoint = sum;                             // ricorda il punteggio
        printf("punto scelto -->  %d\n", myPoint); // stampa del punteggio
        break;                                     // opzionale
    }
    // finche' il gioco non si conclude
    while (CONTINUE == gameStatus) // il gioco continua
    {
        sum = rollDice(); // lancia di nuovo il dato
        // determina lo stato del gioco
        if (sum == myPoint)
        { // si vince facendoi il punteggio
            gameStatus = WON;
        }
        else
        {
            if (7 == sum) // si perde il lancio 7
                gameStatus = LOST;
        }
    }
    // stampa il mesaggio di vincita o di perdita
    if (WON == gameStatus)
    { // il giocatore ha vinto ?
        puts("hai vinto!");
    }
    else
    { // il giocatore ha perso
        puts("hai perso!");
    }
}
int rollDice(void)
{
    int diel1 = 1 + (rand() % 6); // valore a caso per il primo dado
    int diel2 = 1 + (rand() % 6); // valore a caso per il secondo dado

    // stampa i risultati di questo lancio
    printf("il giocatore a rilanciato %d + %d = %d\n", diel1, diel2, diel1 + diel2); // stampa sullo schermo la somma dei valori dei dati
    return diel1 + diel2;                                                            // ristituisce la somma dei dati
}
