#include <stdio.h>

int main()
{

    float guadagno = 0;
    int percentuale = 0;
    float salary = 0;
    char risposta = ' '; 
    risposta = 'S';
   
/*    do
    {

    printf("inserire valore del guadagno dellle vendite: ");
    scanf("%f", &guadagno);
    printf("inserire la percentuale: ");
    scanf("%d", &percentuale);
    salary = ((guadagno / 100) * percentuale) + 200;
    printf("Salary: %2.0f", salary);
    printf("\nvoi continare si o no ? S/N:  ");
    scanf(" %c",&risposta);

    }while (risposta=='S');
  */

 while( risposta == 'S' )
 {
    printf("inserire valore del guadagno dellle vendite: ");
    scanf("%f", &guadagno);
    printf("inserire la percentuale: ");
    scanf("%d", &percentuale);
    salary = ((guadagno / 100) * percentuale) + 200;
    printf("Salary: %2.0f", salary);
    printf("\nvoi continare si o no ? S/N:  ");
    scanf(" %c",&risposta);
 }
