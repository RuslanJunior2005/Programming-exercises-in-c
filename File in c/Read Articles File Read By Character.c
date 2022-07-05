#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Record 255
#define Caratteri 255

int main()
{
	char ch = ' ';
	char riga[Record][Caratteri];

	FILE* fArticoli;


	fArticoli = fopen( "C:\\Users\\Ruslan\\Desktop\\ARTICOLI.csv" , "r" );

	if (!fArticoli)
		printf("Errore nell’apertura\n");
	int r = 0;
	int c = 0;
	while (ch != EOF)
	{ 
		ch = getc(fArticoli);
		while ((ch != '\n') && (ch != EOF))
		{	
			riga[r][c] = ch;
			c++;
			ch = getc(fArticoli);
		}
		r++;
		c = 0;
	 }

	fclose(fArticoli);

	return EXIT_SUCCESS;


}
