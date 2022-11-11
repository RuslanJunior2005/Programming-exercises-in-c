#include <stdio.h>

int main()
{

	float Euro = 0; 
	float Dollaro = 0; 
	float TassoDiScambio = 0; 

	printf("metti Valuta di scambio(Dollaro): ");
	scanf("%f", &Dollaro);

	printf("metti TassoDiScambio: ");
	scanf("%f", &TassoDiScambio);

	Euro = (Dollaro/TassoDiScambio); 

	printf("%f", Euro);

}

//Tasso di conversione = 1.03109
