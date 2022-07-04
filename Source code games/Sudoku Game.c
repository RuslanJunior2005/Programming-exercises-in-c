#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int const VERO = 1;
int const FALSO = 0;

int check_value(int x) {
    if (x >= 0 && x <= 8)
        return FALSO;
    else
        return VERO;
}

#define dimR 9
#define dimC 9
#define dimF 81

int isThereOne(int v[][dimC], int f[][dimR]);      // se il valore possibile è uno solo lo mette nella casella
void There_Is(int v[][dimC], int f[][dimR]);       // calcola i valori possibili per le caselle
void Schema_Sudoku(int a[dimR][dimC]);  // stampa lo schema del sudoku

int main() {
    int errore;
    int continua = VERO;
    int riga, colonna;
    int r, c;
    int V[dimR][dimC];
    int F[dimF][dimR];
    char sn;
    int Qr = 0;
    int Qc = 0;
    int Ir = 0;
    int Ic = 0;
    int trovato;

    // inizializzazione matrice sudoku
    for (colonna = 0; colonna <= 8; colonna++)
        for (riga = 0; riga <= 8; riga++)
            V[riga][colonna] = 0;
    // inserimento valori nella matrice sudoku
    while (continua == VERO)
    {
        sn = ' ';
        // Inserimento cordinate e verifica corretezza   
        errore = VERO;
        while (errore == VERO)
        {
            printf("\nCoordinate numero (riga,colonna): ");
            scanf("%d, %d", &r, &c);

            // sezione prime verifiche verifiche
            riga = r - 1;
            colonna = c - 1;
            // verifica correttezza coordinate
            if (check_value(riga) == VERO || check_value(colonna) == VERO)
                printf("Puoi inserire solo numeri da 1 a 9\n");
            // verifica posizione disponibile
            else if (V[riga][colonna] != 0)
                printf("Posizione (%d,%d) già occupata", r, c);
            else
                errore = FALSO;
        }
        // Inserimento valore e verifica correttezza
        errore = VERO;
        while (errore == VERO)
        {
            // inserimento valore
            printf("\nNumero(%d,%d) ", r, c);
            scanf("%d", &V[riga][colonna]);
            if (check_value(V[riga][colonna]-1) == VERO)
            {
                printf("Puoi inserire solo numeri da 1 a 9\n");
                continue;
            }
            // INIZIO VERIFICA SUL VOLORE INSERITO 

            // verifica ripetizione nella riga
            errore = FALSO;
            for (int k = 0; k <= 8; k++)
                if (V[riga][colonna] == V[riga][k] && k != colonna)
                {
                    printf("valore esistente nella riga: cambiare numero ");
                    errore = VERO;
                    break;
                }
            if (errore == VERO)
                continue;
            // verifica ripetizione nella colonna
            errore = FALSO;
            for (int k = 0; k <= 8; k++)
                if (V[riga][colonna]== V[k][colonna] && k != riga)
                {
                    printf("valore esistente nella colonna: cambiare numero ");
                    errore = VERO;
                    break;
                }
            if (errore == VERO)
                continue;
            // verifica ripetizione nel quadrato
            errore = FALSO;
            Qc = (int)fabs(colonna / 3); //quadrato colonna 
            Qr = (int)fabs(riga / 3);  // quadrato riga
        //    printf("Qc = %d | Qr = %d\n",Qc, Qr);
            Ic = Qc * 3; // Coordinata colonna inizio quadrato
            Ir = Qr * 3; // Coordinata riga inizio quadrato
        //    printf("Ic = %d | Ir = %d\n",Ic, Ir); 
            for (int K = Ic; K <= (Ic + 3) - 1; K++)
                for (int J = Ir; J <= (Ir + 3) - 1; J++)
                    if (J != riga && K != colonna)
                        if (V[J][K] == V[riga][colonna])
                        {
                            printf("numero presente nel quadrato scelgierne unaltro");
                            errore = VERO;
                            break;
                        }

            if (errore == VERO)
                break;
        }
        // richiesta nuovo inserimento
        while ((sn != 's') && (sn != 'n')) {
            printf("Vuoi inserire un altro numero (s/n)?");
            scanf("%s", &sn);
            if ((sn != 's') && (sn != 'n'))
                printf("%s carattere non riconosciuto\n", &sn);
        }
        if (sn == 'n')
            continua = FALSO;
    }
    sn = ' ';

    Schema_Sudoku(V);
    printf("/n");

    //inizializzazione F
    for (int k = 0; k <= dimF; k++) {
        for (int j = 0; j <= 8; j++)
            F[k][j] = 0;
    }

    trovato = VERO;
    while (trovato == VERO)
    {
        There_Is(V, F);
        trovato = isThereOne(V, F);
        Schema_Sudoku(V);
        printf("/n");
    }

    return 0;
}

void Schema_Sudoku(int a[dimR][dimC]) {
   
    for (int riga = 0; riga <= 8; riga++)
    {
        if (abs(riga / 3) == (float)riga / 3)
            printf("=====================================\n");
        else
            printf("-           -           -           \n");
        for (int colonna = 0; colonna <= 8; colonna++)
        {
            if (a[riga][colonna] != 0)
                if (abs(colonna / 3) == (float)colonna / 3)
                    printf("| %d ", a[riga][colonna]);
                else
                    printf("  %d ", a[riga][colonna]);
            else
                if (abs(colonna / 3) == (float)colonna / 3)
                    printf("|   ");
                else
                    printf("    ");
        }
        printf("|\n");
    }
    printf("=====================================\n");
}


//funzione di ricerca numero nella riga o colonna o quadrato

void There_Is(int v[][dimC], int f[][dimR]) {

    int posFr, posFc, Qr, Qc, Ir, Ic;

    // identificazione della casella da esaminare  
    for (int riga = 0; riga <= 8; riga++)
        for (int colonna = 0; colonna <= 8; colonna++)
        {
            if (v[riga][colonna] != 0)
                continue;
            // Casella individuata
            posFr = riga * 9 + colonna;
            // analizza la riga
            for (int c = 0; c <= 8; c++)
            {
                if (v[riga][c] == 0 || c == colonna)
                    continue;
                posFc = v[riga][c]-1;
                f[posFr][posFc] = 1;
            }

            // analkizza la colonna
            for (int r = 0; r <= 8; r++)
            {
                if (v[r][colonna] == 0 || r == riga)
                    continue;
                posFc = v[r][colonna] - 1;
                f[posFr][posFc] = 1;
            }

            // analizza il quadrato
            Qc = (int)fabs(colonna / 3); //quadrato colonna 
            Qr = (int)fabs(riga / 3);  // quadrato riga
            Ir = Qr * 3;
            Ic = Qc * 3;

            for (int J = Ir; J <= (Ir + 3) - 1; J++)
                for (int K = Ic; K <= (Ic + 3) - 1; K++)
                {
                    if ((J == riga && K == colonna) || (v[J][K] == 0))
                        continue;
                    posFc = v[J][K] - 1;
                    f[posFr][posFc] = 1;
                }
        }
}


int isThereOne(int v[][dimC], int f[][dimR]) {

    int posFr;     // coordinate oper la matrice f
    int contaZero = 0;
    int valore = 0;
    int posZero = 0;
    int trovato = FALSO;  // Non è stata fatta alcuna modifica su v

    for (int riga = 0; riga <= 8; riga++)
        for (int colonna = 0; colonna <= 8; colonna++) 
        {
            // se la cella puntata contiene già un valore non eseguo
            if (v[riga][colonna] != 0)
                continue;

            posFr = riga * 9 + colonna; // determino la posizione nel vettore f

            contaZero = 0;
            for (int valore = 0; valore <= 8; valore++)
            {
                if (f[posFr][valore] == 0)  // se la colonna nel vettore f è uno zero lo conto
                {
                    contaZero++;
                    posZero = valore;
                }
                if (contaZero > 1) // se ho contato più di uno zero c'è incertezza e non mi interessa caotinuare
                    break;
                
            }
            if (contaZero == 1) // se c'è un solo zero metto il valore nella matrice v, annullo lo zero in f e ritorno vero
            { 
                v[riga][colonna] = posZero+1;
                f[posFr][valore] = 0;
                trovato = VERO;
     
            }
        }
    return trovato;
}
