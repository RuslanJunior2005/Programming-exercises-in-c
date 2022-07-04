#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define rigaPiano 15
#define colonnaPiano 15
#define numeroNavi 5

int const  VERO = 1;
int const FALSO = 0;

void stampaLinea(int aCapoInizio, int spaziInizio, int n, int aCapoFine);
void stampaPianoGioco(int campo[rigaPiano][colonnaPiano]);

int main()
{
 	srand(time(NULL)); // Inizializzazione sequenza numeri casuali
	// RAND_MAX è il numero casuale massimo
	  //rand() è la funzione che ritorna un numero casuale

	//dichiarazione della matrice  
	int piano[rigaPiano][colonnaPiano];
	//inizilizazione della matice 
	for (int i = 0; i < rigaPiano; i++)
		for (int k = 0; k < colonnaPiano; k++)
			piano[i][k] = 0;

	

	//stampaPianoGioco(piano);

	//Flotta

	char nomeNavi[numeroNavi][20] = { "Portaaerei","Incrociatore","Sommergibile","Sommergibile","Mas" };
	int lunghezzaNavi[numeroNavi] = { 5,4,3,3,2 };
	float puntiNavi[numeroNavi] = {1.00,1.25,1.67,1.67,2.5};
	int inizioX[numeroNavi] = {0,0,0,0,0};
	int  inizioY[numeroNavi] = { 0,0,0,0,0 };
	int orientamentoNave[numeroNavi] = { 0,0,0,0,0 };
	int direzione;

	// Posizionamento navi
	
	for (int nave = 0; nave < numeroNavi; nave++)
	{
		int ok = FALSO;
		while (ok == FALSO)
		{
			// determinazione coordinata iniziale
			inizioX[nave] = (int)(rand() * colonnaPiano / RAND_MAX);
			inizioY[nave] = (int)(rand() * rigaPiano / RAND_MAX);

			if (piano[inizioX[nave]][inizioY[nave]] != 0)
				continue;

			// correzione posizionamento a causa del bordo del piano di gioco
			direzione = (int)(rand() * 4 / RAND_MAX);
			ok = VERO;
			for (int i = 0; i < 4; i++)
			{
				direzione += i;
				if (direzione == 4)
					direzione = 0;

				switch (direzione)
				{
				case 0: // Nord
					if ((inizioY[nave] - lunghezzaNavi[nave] + 1) < 0)
						ok = FALSO;
					break;

				case 1: // Est
					if ((inizioX[nave] - lunghezzaNavi[nave] + 1) > 0)
						ok = FALSO;
					break;
				case 2: // Sud
					if ((inizioY[nave] + lunghezzaNavi[nave] - 1) > 14)
						ok = FALSO;
					break;
				case 3: // Ovest
					if ((inizioX[nave] + lunghezzaNavi[nave] - 1) > 14)
						ok = FALSO;
					break;
				}

				if (ok == VERO)
					if (nave != 0)

						// correzione del posizionamento a causa della presenza dlle altre navi
						switch (direzione)
						{
						case 0://Nord
							for (int i = inizioY[nave] - 1; i < inizioY[nave] - lunghezzaNavi[nave] + 1; --i)
								if (piano[i][inizioX[nave]] == 1)
								{
									ok = FALSO;
									break;
								}
							break;
						case 1://Est
							for (int i = inizioX[nave] - 1; i < inizioX[nave] - lunghezzaNavi[nave] + 1; --i)
								if (piano[inizioY[nave]][i] == 1)
								{
									ok = FALSO;
									break;
								}
							break;
						case 2://Sud
							for (int i = inizioY[nave] + 1; i < inizioY[nave] + lunghezzaNavi[nave] - 1; ++i)
								if (piano[i][inizioX[nave]] == 1)
								{
									ok = FALSO;
									break;
								}
							break;
						case 3://Ovest
							for (int i = inizioX[nave] +1; i < inizioX[nave] + lunghezzaNavi[nave] - 1; ++i)
								if (piano[inizioY[nave]][i] == 1)
								{
									ok = FALSO;
									break;
								}
							break;	
						}
				if (ok == VERO)
					break;
			}
			if (ok == FALSO)
				continue;
		}

		//Scrittura nave nel piano 
		switch (direzione)
		{
		case 0://Nord
			for (int i = inizioY[nave]; i > inizioY[nave] - lunghezzaNavi[nave]; --i)
				piano[inizioX[nave]][i] = nave + 1;
			break;
		case 1://Est
			for (int i = inizioX[nave]; i > inizioX[nave] - lunghezzaNavi[nave]; --i)
				piano[i][inizioY[nave]] = nave + 1;
			break;

		case 2://Sud
			for (int i = inizioY[nave]; i < inizioY[nave] + lunghezzaNavi[nave]; ++i)
				piano[inizioX[nave]][i] = nave + 1;
			break;
		case 3://Ovest
			for (int i = inizioX[nave]; i < inizioX[nave] + lunghezzaNavi[nave]; ++i)
				piano[i][inizioY[nave]] = nave + 1;
			break;

			
		}


	}

	stampaPianoGioco(piano);

}
	
void stampaPianoGioco(int campo[rigaPiano][colonnaPiano])
{
	printf("\n\n\n"); // salto 3 riche all'inizio

	// Stampa intestazione
	char header[] = {"ABCDEFGHILMNOPQ"}; 
	printf("\n     ");
	for(int j = 0; j<15; j++)
		printf("| %c ", header[j]);

	printf("|");
	stampaLinea(VERO, 5, 61, VERO);
	
	for (int riga = 0; riga < rigaPiano; riga++)
	{
		if (riga <= 9)
			printf("  %d  ", riga);
		else
			printf(" %d  ", riga);

		for (int colonna = 0; colonna < colonnaPiano; colonna++) 
			if (campo[riga][colonna] == 0)
				printf("|   ");
			else
				printf("| %d ", campo[riga][colonna]);

		printf("|");
		stampaLinea(VERO,5,61,VERO);
	}
	printf("\n\n\n");
}	
 
void stampaLinea(int aCapoInizio, int spaziInizio, int n, int aCapoFine)
{
	if (aCapoInizio == VERO)
		printf("\n");
	for (int i = 0; i < spaziInizio; i++)
		printf(" ");
	for (int i = 0; i < n; ++i)
		printf("%c", '-');
	if (aCapoFine == VERO)
		printf("\n");
}
