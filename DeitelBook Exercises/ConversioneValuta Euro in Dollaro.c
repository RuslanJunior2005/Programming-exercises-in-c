#include <stdio.h>

int main()
{

	float Euro = 0;
	float Dollaro = 0;
	float TassoDiScambio = 0;

	printf("metti Valuta di scambio(Euro): ");
	scanf("%f", &Euro);

	printf("metti TassoDiScambio: ");
	scanf("%f", &TassoDiScambio);

	Dollaro = (Euro*TassoDiScambio);

	printf("%f", Dollaro);

}

//tasso di SWcambio = 0.98785;
