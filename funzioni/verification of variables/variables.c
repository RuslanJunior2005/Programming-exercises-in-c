#include <stdio.h>

// prototipi di funzioni
void userLocal(void);
void userStaticLocal(void);
void useGlobal(void);

int x = 1; // variabile globale

int main(void)
{
    int x = 5; // variabili locale per il main

    printf("local x in outer scope of main %d\n", x);

    { // inizio del nuovo campo f'azione

        int x = 7; // variabile  locale nel nuovo campo d'azione

        printf("local x in  inner scope of main is %d\n", x);
    } // fine del nuovo campo d'azione

    printf("local x in outer scope if main is %d\n,x");

    userLocal();        // useLocal ha una x locale aoutomatica
    userStaticLocal(); // userStaticLocal ha una x locale statica
    useGlobal();       // useGlobal usa una x globale
    userLocal();        // uselocal reinizializza una x locale aoutomatica
    userStaticLocal(); // la x locale statica conserva il suo valore
    useGlobal();       // la x globale conserve pure il suo valore

    printf("\nlocal x in main is%d\n", x);
}

// useLocal reinizializza la variabile locale x durante ogni chiamata
void userLocal(void)
{
    int x = 25; // inizializzata ogni volta che useLocal e' chiamata

    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
}

// useStaticLocal inizializza la variabile statica locale x solo la
// prima volta che la funzione e' chiamata; il valore di x e'
// conservato tra una chiamata e l'altra a questa funzione
void userStaticLocal(void)
{
    // inizializza x solo una volta
    static int x = 50;

    printf("\nlocal static x is %d on entering useStaticLocal\n", x);
    ++x;
    printf("local static x is %d on exiting useStaticLocal\n", x);
}

// useGlobal modifica la variabile globale x in ogni chiamata
void useGlobal(void)
{
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobal\n", x);
}